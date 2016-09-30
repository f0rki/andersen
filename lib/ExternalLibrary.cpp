#include "Andersen.h"

#include "llvm/IR/Module.h"
#include "llvm/IR/CallSite.h"
#include "llvm/ADT/STLExtras.h"
#include "llvm/Analysis/ValueTracking.h"
#include "llvm/Support/raw_ostream.h"

#include <cstring>

#include "ExternalLibrary.h"

using namespace llvm;


// This function identifies if the external callsite is a library function call, and add constraint
// correspondingly If this is a call to a "known" function, add the constraints and return true. If
// this is a call to an unknown function, return false.
bool Andersen::addConstraintForExternalLibrary(ImmutableCallSite cs, const Function* F)
{
  assert(F != nullptr && "called function is nullptr!");
  assert((F->isDeclaration() || F->isIntrinsic()) && "Not an external function!");

  auto fml = FunctionModelLookup::get(F->getName().data(), F->getName().size());

  if (! fml) {
    errs() << "Unkown external function: " << F->getName() << "(in module " <<
      F->getParent()->getName() << ")\n";
    return false;
  }

  FunctionModel fm = fml->model;

  switch (fm) {
    case FunctionModel::RET_ARG_0:
      {
        NodeIndex retIndex = nodeFactory.getValueNodeFor(cs.getInstruction());
        if (retIndex != AndersNodeFactory::InvalidIndex)
        {
          NodeIndex arg0Index = nodeFactory.getValueNodeFor(cs.getArgument(0));
          assert(arg0Index != AndersNodeFactory::InvalidIndex && "Failed to find arg0 node");
          constraints.emplace_back(AndersConstraint::COPY, retIndex, arg0Index);
        }

        return true;
      }
      break;
    case FunctionModel::RET_ARG_1:
      {
        NodeIndex retIndex = nodeFactory.getValueNodeFor(cs.getInstruction());
        assert(retIndex != AndersNodeFactory::InvalidIndex && "Failed to find call site node");
        NodeIndex arg1Index = nodeFactory.getValueNodeFor(cs.getArgument(1));
        assert(arg1Index != AndersNodeFactory::InvalidIndex && "Failed to find arg1 node");
        constraints.emplace_back(AndersConstraint::COPY, retIndex, arg1Index);
        return true;
      }
      break;
    case FunctionModel::RET_ARG_2:
      {
        NodeIndex retIndex = nodeFactory.getValueNodeFor(cs.getInstruction());
        assert(retIndex != AndersNodeFactory::InvalidIndex && "Failed to find call site node");
        NodeIndex arg2Index = nodeFactory.getValueNodeFor(cs.getArgument(2));
        assert(arg2Index != AndersNodeFactory::InvalidIndex && "Failed to find arg2 node");
        constraints.emplace_back(AndersConstraint::COPY, retIndex, arg2Index);
        return true;
      }
      break;
    case FunctionModel::RET_ARG_3:

      {
        NodeIndex retIndex = nodeFactory.getValueNodeFor(cs.getInstruction());
        assert(retIndex != AndersNodeFactory::InvalidIndex && "Failed to find call site node");
        NodeIndex arg2Index = nodeFactory.getValueNodeFor(cs.getArgument(3));
        assert(arg2Index != AndersNodeFactory::InvalidIndex && "Failed to find arg3 node");
        constraints.emplace_back(AndersConstraint::COPY, retIndex, arg2Index);
        return true;
      }
      break;
    case FunctionModel::RET_ARG_4:
      {
        NodeIndex retIndex = nodeFactory.getValueNodeFor(cs.getInstruction());
        assert(retIndex != AndersNodeFactory::InvalidIndex && "Failed to find call site node");
        NodeIndex arg2Index = nodeFactory.getValueNodeFor(cs.getArgument(4));
        assert(arg2Index != AndersNodeFactory::InvalidIndex && "Failed to find arg4 node");
        constraints.emplace_back(AndersConstraint::COPY, retIndex, arg2Index);
        return true;
      }
      break;
    case FunctionModel::REALLOC_LIKE:
      // original comment:
      // ---
      // Realloc-like library is a little different: if the first argument is nullptr, then it
      // behaves like retArg0Funcs; otherwise, it behaves like mallocFuncs
      // ---
      // Isn't it the other way around? realloc(nullptr, size) == malloc(size)
      // so if cs.getArgument(0) is a nullptr for sure, we can treat the call as malloc.

      if (! isa<ConstantPointerNull>(cs.getArgument(0))) {
        NodeIndex retIndex = nodeFactory.getValueNodeFor(cs.getInstruction());
        if (retIndex != AndersNodeFactory::InvalidIndex)
        {
          NodeIndex arg0Index = nodeFactory.getValueNodeFor(cs.getArgument(0));
          assert(arg0Index != AndersNodeFactory::InvalidIndex && "Failed to find arg0 node");
          constraints.emplace_back(AndersConstraint::COPY, retIndex, arg0Index);
        }

        return true;
      }
      //
      // else fallthrough to malloc like case
      //
    case FunctionModel::MALLOC_LIKE:
      // Library calls that might allocate memory.
      {
        const Instruction* inst = cs.getInstruction();

        // Create the obj node
        NodeIndex objIndex = nodeFactory.createObjectNode(inst);

        // Get the pointer node
        NodeIndex ptrIndex = nodeFactory.getValueNodeFor(inst);
        if (ptrIndex == AndersNodeFactory::InvalidIndex)
        {
          // Must be something like posix_memalign()
          if (F->getName() == "posix_memalign")
          {
            ptrIndex = nodeFactory.getValueNodeFor(cs.getArgument(0));
            assert(ptrIndex != AndersNodeFactory::InvalidIndex && "Failed to find arg0 node");
            constraints.emplace_back(AndersConstraint::STORE, ptrIndex, objIndex);
          }
          else
          {
            errs() << F->getName() << '\n';
            assert(false && "unrecognized malloc call");
          }
        }
        else
        {
          // Normal malloc-like call
          constraints.emplace_back(AndersConstraint::ADDR_OF, ptrIndex, objIndex);
        }

        return true;
      }
      break;
    case FunctionModel::MEMCPY_LIKE:
      {
        NodeIndex arg0Index = nodeFactory.getValueNodeFor(cs.getArgument(0));
        assert(arg0Index != AndersNodeFactory::InvalidIndex && "Failed to find arg0 node");
        NodeIndex arg1Index = nodeFactory.getValueNodeFor(cs.getArgument(1));
        assert(arg1Index != AndersNodeFactory::InvalidIndex && "Failed to find arg1 node");

        NodeIndex tempIndex = nodeFactory.createValueNode();
        constraints.emplace_back(AndersConstraint::LOAD, tempIndex, arg1Index);
        constraints.emplace_back(AndersConstraint::STORE, arg0Index, tempIndex);

        // Don't forget the return value
        NodeIndex retIndex = nodeFactory.getValueNodeFor(cs.getInstruction());
        if (retIndex != AndersNodeFactory::InvalidIndex)
          constraints.emplace_back(AndersConstraint::COPY, retIndex, arg0Index);

        return true;
      }
      break;
    case FunctionModel::LLVM_VA_ARG:
      {
        const Instruction* inst = cs.getInstruction();
        const Function* parentF = inst->getParent()->getParent();
        assert(parentF->getFunctionType()->isVarArg());
        NodeIndex arg0Index = nodeFactory.getValueNodeFor(cs.getArgument(0));
        assert(arg0Index != AndersNodeFactory::InvalidIndex && "Failed to find arg0 node");
        NodeIndex vaIndex = nodeFactory.getVarargNodeFor(parentF);
        assert(vaIndex != AndersNodeFactory::InvalidIndex && "Failed to find va node");
        constraints.emplace_back(AndersConstraint::ADDR_OF, arg0Index, vaIndex);

        return true;
      }
      break;
    case FunctionModel::CONVERT:
      {
        if (!isa<ConstantPointerNull>(cs.getArgument(1)))
        {
          NodeIndex arg0Index = nodeFactory.getValueNodeFor(cs.getArgument(0));
          assert(arg0Index != AndersNodeFactory::InvalidIndex && "Failed to find arg0 node");
          NodeIndex arg1Index = nodeFactory.getValueNodeFor(cs.getArgument(1));
          assert(arg1Index != AndersNodeFactory::InvalidIndex && "Failed to find arg1 node");
          constraints.emplace_back(AndersConstraint::STORE, arg0Index, arg1Index);
        }

        return true;
      }
    case FunctionModel::NOOP:
      // These functions don't induce any points-to constraints
      return true;
    case FunctionModel::UNKNOWN:
    default:
      errs() << "Unkown external function: " << F->getName() << "(in module " <<
        F->getParent()->getName() << ")\n";
      return false;
  }

  return false;
}
