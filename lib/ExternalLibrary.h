/* C++ code produced by gperf version 3.0.4 */
/* Command-line: gperf -CDG -t -L C++ -Z FunctionModelLookup -N get ExternalLibrary.gperf  */
/* Computed positions: -k'1-6,10,$' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#line 1 "ExternalLibrary.gperf"

enum class FunctionModel {
  UNKNOWN = 0,
  NOOP,
  MALLOC_LIKE,
  REALLOC_LIKE,
  MEMCPY_LIKE,
  ALLOC_ARG0,
  ALLOC_ARG2,
  CONVERT,
  LLVM_VA_ARG,
  RET_ARG_0,
  RET_ARG_1,
  RET_ARG_2,
  RET_ARG_3,
  RET_ARG_4,
};
#line 19 "ExternalLibrary.gperf"
struct FMOption {
  const char* name;
  const FunctionModel model;
};

#define TOTAL_KEYWORDS 245
#define MIN_WORD_LENGTH 3
#define MAX_WORD_LENGTH 26
#define MIN_HASH_VALUE 9
#define MAX_HASH_VALUE 716
/* maximum key range = 708, duplicates = 6 */

class FunctionModelLookup
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct FMOption *get (const char *str, unsigned int len);
};

inline unsigned int
FunctionModelLookup::hash (register const char *str, register unsigned int len)
{
  static const unsigned short asso_values[] =
    {
      717, 717, 717, 717, 717, 717, 717, 717, 717, 717,
      717, 717, 717, 717, 717, 717, 717, 717, 717, 717,
      717, 717, 717, 717, 717, 717, 717, 717, 717, 717,
      717, 717, 717, 717, 717, 717, 717, 717, 717, 717,
      717, 717, 717, 717, 717, 717,   0, 717,   5,   0,
       45, 717,  90, 717,   0, 717,  60,   5, 717, 717,
      717, 717, 717, 717, 717, 717, 717, 717, 717, 717,
      717, 717, 717,   5, 717, 717, 717, 717, 717,   0,
        0, 717,   5, 717, 717, 717, 717, 717, 717, 717,
        5, 717, 717, 717, 717, 120, 717,  45, 250,  25,
      110,  10,   0, 140, 195,  50,  35,   5,  10,  30,
       15,  10,  95,   0,   0,   5,   0,  30, 215, 115,
       35, 150, 717, 717, 717, 717, 717, 717, 717, 717,
      717, 717, 717, 717, 717, 717, 717, 717, 717, 717,
      717, 717, 717, 717, 717, 717, 717, 717, 717, 717,
      717, 717, 717, 717, 717, 717, 717, 717, 717, 717,
      717, 717, 717, 717, 717, 717, 717, 717, 717, 717,
      717, 717, 717, 717, 717, 717, 717, 717, 717, 717,
      717, 717, 717, 717, 717, 717, 717, 717, 717, 717,
      717, 717, 717, 717, 717, 717, 717, 717, 717, 717,
      717, 717, 717, 717, 717, 717, 717, 717, 717, 717,
      717, 717, 717, 717, 717, 717, 717, 717, 717, 717,
      717, 717, 717, 717, 717, 717, 717, 717, 717, 717,
      717, 717, 717, 717, 717, 717, 717, 717, 717, 717,
      717, 717, 717, 717, 717, 717, 717, 717, 717, 717,
      717, 717, 717, 717, 717, 717
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[9]];
      /*FALLTHROUGH*/
      case 9:
      case 8:
      case 7:
      case 6:
        hval += asso_values[(unsigned char)str[5]];
      /*FALLTHROUGH*/
      case 5:
        hval += asso_values[(unsigned char)str[4]];
      /*FALLTHROUGH*/
      case 4:
        hval += asso_values[(unsigned char)str[3]];
      /*FALLTHROUGH*/
      case 3:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
        hval += asso_values[(unsigned char)str[1]];
      /*FALLTHROUGH*/
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

static const struct FMOption wordlist[] =
  {
#line 137 "ExternalLibrary.gperf"
    {"sqrt", FunctionModel::NOOP},
#line 138 "ExternalLibrary.gperf"
    {"sqrtf", FunctionModel::NOOP},
#line 244 "ExternalLibrary.gperf"
    {"strstr", FunctionModel::RET_ARG_0},
#line 158 "ExternalLibrary.gperf"
    {"qsort", FunctionModel::NOOP},
#line 65 "ExternalLibrary.gperf"
    {"strtof", FunctionModel::NOOP},
#line 263 "ExternalLibrary.gperf"
    {"strtof", FunctionModel::CONVERT},
#line 173 "ExternalLibrary.gperf"
    {"strerror", FunctionModel::NOOP},
#line 70 "ExternalLibrary.gperf"
    {"feof", FunctionModel::NOOP},
#line 238 "ExternalLibrary.gperf"
    {"strerror_r", FunctionModel::RET_ARG_0},
#line 75 "ExternalLibrary.gperf"
    {"ferror", FunctionModel::NOOP},
#line 229 "ExternalLibrary.gperf"
    {"strtok_r", FunctionModel::REALLOC_LIKE},
#line 228 "ExternalLibrary.gperf"
    {"strtok", FunctionModel::REALLOC_LIKE},
#line 42 "ExternalLibrary.gperf"
    {"free", FunctionModel::NOOP},
#line 135 "ExternalLibrary.gperf"
    {"floor", FunctionModel::NOOP},
#line 88 "ExternalLibrary.gperf"
    {"fseek", FunctionModel::NOOP},
#line 264 "ExternalLibrary.gperf"
    {"strtol", FunctionModel::CONVERT},
#line 266 "ExternalLibrary.gperf"
    {"strtoll", FunctionModel::CONVERT},
#line 128 "ExternalLibrary.gperf"
    {"cosf", FunctionModel::NOOP},
#line 74 "ExternalLibrary.gperf"
    {"ftell", FunctionModel::NOOP},
#line 85 "ExternalLibrary.gperf"
    {"ftell", FunctionModel::NOOP},
#line 186 "ExternalLibrary.gperf"
    {"fetestexcept", FunctionModel::NOOP},
#line 126 "ExternalLibrary.gperf"
    {"cos", FunctionModel::NOOP},
#line 61 "ExternalLibrary.gperf"
    {"stat", FunctionModel::NOOP},
#line 62 "ExternalLibrary.gperf"
    {"fstat", FunctionModel::NOOP},
#line 35 "ExternalLibrary.gperf"
    {"atof", FunctionModel::NOOP},
#line 33 "ExternalLibrary.gperf"
    {"strlen", FunctionModel::NOOP},
#line 267 "ExternalLibrary.gperf"
    {"strtoul", FunctionModel::CONVERT},
#line 63 "ExternalLibrary.gperf"
    {"lstat", FunctionModel::NOOP},
#line 157 "ExternalLibrary.gperf"
    {"strftime", FunctionModel::NOOP},
#line 127 "ExternalLibrary.gperf"
    {"sinf", FunctionModel::NOOP},
#line 171 "ExternalLibrary.gperf"
    {"close", FunctionModel::NOOP},
#line 170 "ExternalLibrary.gperf"
    {"fclose", FunctionModel::NOOP},
#line 131 "ExternalLibrary.gperf"
    {"tan", FunctionModel::NOOP},
#line 36 "ExternalLibrary.gperf"
    {"atol", FunctionModel::NOOP},
#line 235 "ExternalLibrary.gperf"
    {"strcat", FunctionModel::RET_ARG_0},
#line 204 "ExternalLibrary.gperf"
    {"setrlimit", FunctionModel::NOOP},
#line 146 "ExternalLibrary.gperf"
    {"clock", FunctionModel::NOOP},
#line 125 "ExternalLibrary.gperf"
    {"sin", FunctionModel::NOOP},
#line 37 "ExternalLibrary.gperf"
    {"atoll", FunctionModel::NOOP},
#line 195 "ExternalLibrary.gperf"
    {"memset", FunctionModel::NOOP},
#line 130 "ExternalLibrary.gperf"
    {"acos", FunctionModel::NOOP},
#line 97 "ExternalLibrary.gperf"
    {"scanf", FunctionModel::NOOP},
#line 98 "ExternalLibrary.gperf"
    {"fscanf", FunctionModel::NOOP},
#line 239 "ExternalLibrary.gperf"
    {"strncat", FunctionModel::RET_ARG_0},
#line 147 "ExternalLibrary.gperf"
    {"exit", FunctionModel::NOOP},
#line 99 "ExternalLibrary.gperf"
    {"sscanf", FunctionModel::NOOP},
#line 272 "ExternalLibrary.gperf"
    {"transmit", FunctionModel::NOOP},
#line 60 "ExternalLibrary.gperf"
    {"time", FunctionModel::NOOP},
#line 43 "ExternalLibrary.gperf"
    {"execl", FunctionModel::NOOP},
#line 52 "ExternalLibrary.gperf"
    {"create", FunctionModel::NOOP},
#line 72 "ExternalLibrary.gperf"
    {"clearerr", FunctionModel::NOOP},
#line 136 "ExternalLibrary.gperf"
    {"ceil", FunctionModel::NOOP},
#line 71 "ExternalLibrary.gperf"
    {"fileno", FunctionModel::NOOP},
#line 109 "ExternalLibrary.gperf"
    {"iscntrl", FunctionModel::NOOP},
#line 45 "ExternalLibrary.gperf"
    {"execle", FunctionModel::NOOP},
#line 227 "ExternalLibrary.gperf"
    {"realloc", FunctionModel::REALLOC_LIKE},
#line 156 "ExternalLibrary.gperf"
    {"localtime", FunctionModel::NOOP},
#line 172 "ExternalLibrary.gperf"
    {"perror", FunctionModel::NOOP},
#line 132 "ExternalLibrary.gperf"
    {"atan", FunctionModel::NOOP},
#line 40 "ExternalLibrary.gperf"
    {"rename", FunctionModel::NOOP},
#line 153 "ExternalLibrary.gperf"
    {"ctime", FunctionModel::NOOP},
#line 90 "ExternalLibrary.gperf"
    {"fsetpos", FunctionModel::NOOP},
#line 53 "ExternalLibrary.gperf"
    {"truncate", FunctionModel::NOOP},
#line 129 "ExternalLibrary.gperf"
    {"asin", FunctionModel::NOOP},
#line 39 "ExternalLibrary.gperf"
    {"unlink", FunctionModel::NOOP},
#line 188 "ExternalLibrary.gperf"
    {"feclearexcept", FunctionModel::NOOP},
#line 49 "ExternalLibrary.gperf"
    {"puts", FunctionModel::NOOP},
#line 83 "ExternalLibrary.gperf"
    {"fputs", FunctionModel::NOOP},
#line 154 "ExternalLibrary.gperf"
    {"strspn", FunctionModel::NOOP},
#line 66 "ExternalLibrary.gperf"
    {"strtold", FunctionModel::NOOP},
#line 265 "ExternalLibrary.gperf"
    {"strtold", FunctionModel::CONVERT},
#line 248 "ExternalLibrary.gperf"
    {"freopen", FunctionModel::RET_ARG_2},
#line 187 "ExternalLibrary.gperf"
    {"feraiseexcept", FunctionModel::NOOP},
#line 51 "ExternalLibrary.gperf"
    {"open", FunctionModel::NOOP},
#line 67 "ExternalLibrary.gperf"
    {"fopen", FunctionModel::NOOP},
#line 155 "ExternalLibrary.gperf"
    {"strcspn", FunctionModel::NOOP},
#line 102 "ExternalLibrary.gperf"
    {"modf", FunctionModel::NOOP},
#line 30 "ExternalLibrary.gperf"
    {"exp10", FunctionModel::NOOP},
#line 209 "ExternalLibrary.gperf"
    {"calloc", FunctionModel::MALLOC_LIKE},
#line 34 "ExternalLibrary.gperf"
    {"atoi", FunctionModel::NOOP},
#line 207 "ExternalLibrary.gperf"
    {"malloc", FunctionModel::MALLOC_LIKE},
#line 141 "ExternalLibrary.gperf"
    {"tolower", FunctionModel::NOOP},
#line 281 "ExternalLibrary.gperf"
    {"allocate", FunctionModel::ALLOC_ARG2},
#line 233 "ExternalLibrary.gperf"
    {"gets", FunctionModel::RET_ARG_0},
#line 232 "ExternalLibrary.gperf"
    {"fgets", FunctionModel::RET_ARG_0},
#line 91 "ExternalLibrary.gperf"
    {"printf", FunctionModel::NOOP},
#line 92 "ExternalLibrary.gperf"
    {"fprintf", FunctionModel::NOOP},
#line 242 "ExternalLibrary.gperf"
    {"strptime", FunctionModel::RET_ARG_0},
#line 160 "ExternalLibrary.gperf"
    {"pclose", FunctionModel::NOOP},
#line 93 "ExternalLibrary.gperf"
    {"sprintf", FunctionModel::NOOP},
#line 27 "ExternalLibrary.gperf"
    {"log10", FunctionModel::NOOP},
#line 32 "ExternalLibrary.gperf"
    {"strncmp", FunctionModel::NOOP},
#line 84 "ExternalLibrary.gperf"
    {"putc", FunctionModel::NOOP},
#line 82 "ExternalLibrary.gperf"
    {"fputc", FunctionModel::NOOP},
#line 50 "ExternalLibrary.gperf"
    {"write", FunctionModel::NOOP},
#line 79 "ExternalLibrary.gperf"
    {"fwrite", FunctionModel::NOOP},
#line 104 "ExternalLibrary.gperf"
    {"isalnum", FunctionModel::NOOP},
#line 56 "ExternalLibrary.gperf"
    {"rmdir", FunctionModel::NOOP},
#line 221 "ExternalLibrary.gperf"
    {"memalign", FunctionModel::MALLOC_LIKE},
#line 55 "ExternalLibrary.gperf"
    {"mkdir", FunctionModel::NOOP},
#line 76 "ExternalLibrary.gperf"
    {"fgetc", FunctionModel::NOOP},
#line 112 "ExternalLibrary.gperf"
    {"islower", FunctionModel::NOOP},
#line 59 "ExternalLibrary.gperf"
    {"wait", FunctionModel::NOOP},
#line 205 "ExternalLibrary.gperf"
    {"getrlimit", FunctionModel::NOOP},
#line 113 "ExternalLibrary.gperf"
    {"isprint", FunctionModel::NOOP},
#line 278 "ExternalLibrary.gperf"
    {"deallocate", FunctionModel::NOOP},
#line 114 "ExternalLibrary.gperf"
    {"ispunct", FunctionModel::NOOP},
#line 179 "ExternalLibrary.gperf"
    {"difftime", FunctionModel::NOOP},
#line 152 "ExternalLibrary.gperf"
    {"sleep", FunctionModel::NOOP},
#line 236 "ExternalLibrary.gperf"
    {"strchr", FunctionModel::RET_ARG_0},
#line 243 "ExternalLibrary.gperf"
    {"strrchr", FunctionModel::RET_ARG_0},
#line 29 "ExternalLibrary.gperf"
    {"exp2", FunctionModel::NOOP},
#line 145 "ExternalLibrary.gperf"
    {"system", FunctionModel::NOOP},
#line 106 "ExternalLibrary.gperf"
    {"isascii", FunctionModel::NOOP},
#line 28 "ExternalLibrary.gperf"
    {"exp", FunctionModel::NOOP},
#line 269 "ExternalLibrary.gperf"
    {"_terminate", FunctionModel::NOOP},
#line 64 "ExternalLibrary.gperf"
    {"strtod", FunctionModel::NOOP},
#line 262 "ExternalLibrary.gperf"
    {"strtod", FunctionModel::CONVERT},
#line 115 "ExternalLibrary.gperf"
    {"isspace", FunctionModel::NOOP},
#line 217 "ExternalLibrary.gperf"
    {"_ZnamRKSt9nothrow_t", FunctionModel::MALLOC_LIKE},
#line 159 "ExternalLibrary.gperf"
    {"popen", FunctionModel::NOOP},
#line 140 "ExternalLibrary.gperf"
    {"random", FunctionModel::NOOP},
#line 270 "ExternalLibrary.gperf"
    {"random", FunctionModel::NOOP},
#line 142 "ExternalLibrary.gperf"
    {"toupper", FunctionModel::NOOP},
#line 215 "ExternalLibrary.gperf"
    {"_ZnajRKSt9nothrow_t", FunctionModel::MALLOC_LIKE},
#line 216 "ExternalLibrary.gperf"
    {"_Znam", FunctionModel::MALLOC_LIKE},
#line 81 "ExternalLibrary.gperf"
    {"ungetc", FunctionModel::NOOP},
#line 184 "ExternalLibrary.gperf"
    {"fesetround", FunctionModel::NOOP},
#line 31 "ExternalLibrary.gperf"
    {"strcmp", FunctionModel::NOOP},
#line 214 "ExternalLibrary.gperf"
    {"_Znaj", FunctionModel::MALLOC_LIKE},
#line 68 "ExternalLibrary.gperf"
    {"fdopen", FunctionModel::NOOP},
#line 219 "ExternalLibrary.gperf"
    {"strndup", FunctionModel::MALLOC_LIKE},
#line 58 "ExternalLibrary.gperf"
    {"pipe", FunctionModel::NOOP},
#line 89 "ExternalLibrary.gperf"
    {"fgetpos", FunctionModel::NOOP},
#line 143 "ExternalLibrary.gperf"
    {"towlower", FunctionModel::NOOP},
#line 117 "ExternalLibrary.gperf"
    {"iswalnum", FunctionModel::NOOP},
#line 57 "ExternalLibrary.gperf"
    {"read", FunctionModel::NOOP},
#line 80 "ExternalLibrary.gperf"
    {"fread", FunctionModel::NOOP},
#line 246 "ExternalLibrary.gperf"
    {"signal", FunctionModel::RET_ARG_1},
#line 161 "ExternalLibrary.gperf"
    {"rand", FunctionModel::NOOP},
#line 44 "ExternalLibrary.gperf"
    {"execlp", FunctionModel::NOOP},
#line 163 "ExternalLibrary.gperf"
    {"srand", FunctionModel::NOOP},
#line 38 "ExternalLibrary.gperf"
    {"remove", FunctionModel::NOOP},
#line 116 "ExternalLibrary.gperf"
    {"isupper", FunctionModel::NOOP},
#line 192 "ExternalLibrary.gperf"
    {"llvm.lifetime.start", FunctionModel::NOOP},
#line 162 "ExternalLibrary.gperf"
    {"rand_r", FunctionModel::NOOP},
#line 240 "ExternalLibrary.gperf"
    {"strncpy", FunctionModel::RET_ARG_0},
#line 225 "ExternalLibrary.gperf"
    {"mmap", FunctionModel::MALLOC_LIKE},
#line 180 "ExternalLibrary.gperf"
    {"setbuf", FunctionModel::NOOP},
#line 194 "ExternalLibrary.gperf"
    {"llvm.stackrestore", FunctionModel::NOOP},
#line 26 "ExternalLibrary.gperf"
    {"log", FunctionModel::NOOP},
#line 175 "ExternalLibrary.gperf"
    {"__errno_location", FunctionModel::NOOP},
#line 178 "ExternalLibrary.gperf"
    {"abs", FunctionModel::NOOP},
#line 133 "ExternalLibrary.gperf"
    {"fabs", FunctionModel::NOOP},
#line 149 "ExternalLibrary.gperf"
    {"abort", FunctionModel::NOOP},
#line 121 "ExternalLibrary.gperf"
    {"iswlower", FunctionModel::NOOP},
#line 213 "ExternalLibrary.gperf"
    {"_ZnwmRKSt9nothrow_t", FunctionModel::MALLOC_LIKE},
#line 224 "ExternalLibrary.gperf"
    {"aligned_alloc", FunctionModel::MALLOC_LIKE},
#line 211 "ExternalLibrary.gperf"
    {"_ZnwjRKSt9nothrow_t", FunctionModel::MALLOC_LIKE},
#line 212 "ExternalLibrary.gperf"
    {"_Znwm", FunctionModel::MALLOC_LIKE},
#line 41 "ExternalLibrary.gperf"
    {"memcmp", FunctionModel::NOOP},
#line 123 "ExternalLibrary.gperf"
    {"iswprint", FunctionModel::NOOP},
#line 276 "ExternalLibrary.gperf"
    {"fdwait", FunctionModel::NOOP},
#line 274 "ExternalLibrary.gperf"
    {"receive", FunctionModel::NOOP},
#line 101 "ExternalLibrary.gperf"
    {"__assert_fail", FunctionModel::NOOP},
#line 210 "ExternalLibrary.gperf"
    {"_Znwj", FunctionModel::MALLOC_LIKE},
#line 167 "ExternalLibrary.gperf"
    {"srand48", FunctionModel::NOOP},
#line 122 "ExternalLibrary.gperf"
    {"iswspace", FunctionModel::NOOP},
#line 166 "ExternalLibrary.gperf"
    {"lrand48", FunctionModel::NOOP},
#line 134 "ExternalLibrary.gperf"
    {"pow", FunctionModel::NOOP},
#line 218 "ExternalLibrary.gperf"
    {"strdup", FunctionModel::MALLOC_LIKE},
#line 259 "ExternalLibrary.gperf"
    {"memmove", FunctionModel::MEMCPY_LIKE},
#line 169 "ExternalLibrary.gperf"
    {"__isoc99_fscanf", FunctionModel::NOOP},
#line 208 "ExternalLibrary.gperf"
    {"valloc", FunctionModel::MALLOC_LIKE},
#line 100 "ExternalLibrary.gperf"
    {"__isoc99_scanf", FunctionModel::NOOP},
#line 168 "ExternalLibrary.gperf"
    {"__isoc99_sscanf", FunctionModel::NOOP},
#line 164 "ExternalLibrary.gperf"
    {"seed48", FunctionModel::NOOP},
#line 273 "ExternalLibrary.gperf"
    {"cgc_transmit", FunctionModel::NOOP},
#line 144 "ExternalLibrary.gperf"
    {"towupper", FunctionModel::NOOP},
#line 241 "ExternalLibrary.gperf"
    {"strpbrk", FunctionModel::RET_ARG_0},
#line 119 "ExternalLibrary.gperf"
    {"iswctype", FunctionModel::NOOP},
#line 196 "ExternalLibrary.gperf"
    {"llvm.memset.i32", FunctionModel::NOOP},
#line 254 "ExternalLibrary.gperf"
    {"llvm.memmove.i32", FunctionModel::MEMCPY_LIKE},
#line 151 "ExternalLibrary.gperf"
    {"settimeofday", FunctionModel::NOOP},
#line 197 "ExternalLibrary.gperf"
    {"llvm.memset.p0i8.i32", FunctionModel::NOOP},
#line 258 "ExternalLibrary.gperf"
    {"memccpy", FunctionModel::MEMCPY_LIKE},
#line 118 "ExternalLibrary.gperf"
    {"iswalpha", FunctionModel::NOOP},
#line 255 "ExternalLibrary.gperf"
    {"llvm.memmove.p0i8.p0i8.i32", FunctionModel::MEMCPY_LIKE},
#line 94 "ExternalLibrary.gperf"
    {"vprintf", FunctionModel::NOOP},
#line 95 "ExternalLibrary.gperf"
    {"vfprintf", FunctionModel::NOOP},
#line 54 "ExternalLibrary.gperf"
    {"chdir", FunctionModel::NOOP},
#line 108 "ExternalLibrary.gperf"
    {"isblank", FunctionModel::NOOP},
#line 96 "ExternalLibrary.gperf"
    {"vsprintf", FunctionModel::NOOP},
#line 222 "ExternalLibrary.gperf"
    {"posix_memalign", FunctionModel::ALLOC_ARG0},
#line 185 "ExternalLibrary.gperf"
    {"fegetround", FunctionModel::NOOP},
#line 191 "ExternalLibrary.gperf"
    {"llvm.ctlz.i64", FunctionModel::NOOP},
#line 103 "ExternalLibrary.gperf"
    {"putchar", FunctionModel::NOOP},
#line 124 "ExternalLibrary.gperf"
    {"iswupper", FunctionModel::NOOP},
#line 193 "ExternalLibrary.gperf"
    {"llvm.lifetime.end", FunctionModel::NOOP},
#line 87 "ExternalLibrary.gperf"
    {"_IO_putc", FunctionModel::NOOP},
#line 107 "ExternalLibrary.gperf"
    {"isatty", FunctionModel::NOOP},
#line 198 "ExternalLibrary.gperf"
    {"llvm.memset.i64", FunctionModel::NOOP},
#line 256 "ExternalLibrary.gperf"
    {"llvm.memmove.i64", FunctionModel::MEMCPY_LIKE},
#line 110 "ExternalLibrary.gperf"
    {"isdigit", FunctionModel::NOOP},
#line 199 "ExternalLibrary.gperf"
    {"llvm.memset.p0i8.i64", FunctionModel::NOOP},
#line 73 "ExternalLibrary.gperf"
    {"rewind", FunctionModel::NOOP},
#line 86 "ExternalLibrary.gperf"
    {"rewind", FunctionModel::NOOP},
#line 223 "ExternalLibrary.gperf"
    {"pvalloc", FunctionModel::MALLOC_LIKE},
#line 257 "ExternalLibrary.gperf"
    {"llvm.memmove.p0i8.p0i8.i64", FunctionModel::MEMCPY_LIKE},
#line 77 "ExternalLibrary.gperf"
    {"getchar", FunctionModel::NOOP},
#line 271 "ExternalLibrary.gperf"
    {"cgc_random", FunctionModel::NOOP},
#line 78 "ExternalLibrary.gperf"
    {"_IO_getc", FunctionModel::NOOP},
#line 277 "ExternalLibrary.gperf"
    {"cgc_fdwait", FunctionModel::NOOP},
#line 237 "ExternalLibrary.gperf"
    {"strcpy", FunctionModel::RET_ARG_0},
#line 282 "ExternalLibrary.gperf"
    {"cgc_allocate", FunctionModel::ALLOC_ARG2},
#line 165 "ExternalLibrary.gperf"
    {"drand48", FunctionModel::NOOP},
#line 69 "ExternalLibrary.gperf"
    {"fflush", FunctionModel::NOOP},
#line 250 "ExternalLibrary.gperf"
    {"llvm.memcpy.i32", FunctionModel::MEMCPY_LIKE},
#line 105 "ExternalLibrary.gperf"
    {"isalpha", FunctionModel::NOOP},
#line 139 "ExternalLibrary.gperf"
    {"hypot", FunctionModel::NOOP},
#line 251 "ExternalLibrary.gperf"
    {"llvm.memcpy.p0i8.p0i8.i32", FunctionModel::MEMCPY_LIKE},
#line 279 "ExternalLibrary.gperf"
    {"cgc_deallocate", FunctionModel::NOOP},
#line 120 "ExternalLibrary.gperf"
    {"iswdigit", FunctionModel::NOOP},
#line 48 "ExternalLibrary.gperf"
    {"chmod", FunctionModel::NOOP},
#line 47 "ExternalLibrary.gperf"
    {"execvp", FunctionModel::NOOP},
#line 24 "ExternalLibrary.gperf"
    {"llvm.va_start", FunctionModel::LLVM_VA_ARG},
#line 252 "ExternalLibrary.gperf"
    {"llvm.memcpy.i64", FunctionModel::MEMCPY_LIKE},
#line 150 "ExternalLibrary.gperf"
    {"gettimeofday", FunctionModel::NOOP},
#line 253 "ExternalLibrary.gperf"
    {"llvm.memcpy.p0i8.p0i8.i64", FunctionModel::MEMCPY_LIKE},
#line 202 "ExternalLibrary.gperf"
    {"llvm.dbg.declare", FunctionModel::NOOP},
#line 148 "ExternalLibrary.gperf"
    {"__cxa_atexit", FunctionModel::NOOP},
#line 46 "ExternalLibrary.gperf"
    {"execv", FunctionModel::NOOP},
#line 230 "ExternalLibrary.gperf"
    {"getcwd", FunctionModel::REALLOC_LIKE},
#line 234 "ExternalLibrary.gperf"
    {"stpcpy", FunctionModel::RET_ARG_0},
#line 111 "ExternalLibrary.gperf"
    {"isgraph", FunctionModel::NOOP},
#line 275 "ExternalLibrary.gperf"
    {"cgc_receive", FunctionModel::NOOP},
#line 220 "ExternalLibrary.gperf"
    {"getenv", FunctionModel::MALLOC_LIKE},
#line 201 "ExternalLibrary.gperf"
    {"llvm.dbg.value", FunctionModel::NOOP},
#line 200 "ExternalLibrary.gperf"
    {"llvm.va_end", FunctionModel::NOOP},
#line 189 "ExternalLibrary.gperf"
    {"llvm.bswap.i16", FunctionModel::NOOP},
#line 177 "ExternalLibrary.gperf"
    {"__ctype_b_loc", FunctionModel::MALLOC_LIKE},
#line 190 "ExternalLibrary.gperf"
    {"llvm.bswap.i32", FunctionModel::NOOP},
#line 182 "ExternalLibrary.gperf"
    {"_ZdlPv", FunctionModel::NOOP},
#line 260 "ExternalLibrary.gperf"
    {"bcopy", FunctionModel::MEMCPY_LIKE},
#line 183 "ExternalLibrary.gperf"
    {"_ZdaPv", FunctionModel::NOOP}
  };

static const short lookup[] =
  {
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,    0,    1,   -1,   -1,   -1,   -1,   -1,
       2,   -1,   -1,   -1,    3, -275,   -1,    6,
       7,    8,    9,   -1,   10, -241,   -2,   11,
      -1,   -1,   12,   13,   -1,   -1,   -1,   -1,
      14,   15,   16,   -1,   17, -295,   -1,   20,
      21, -227,   -2,   -1,   -1,   -1,   22,   23,
      -1,   -1,   -1,   24,   -1,   25,   26,   -1,
      -1,   27,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   28,   29,   30,   31,   -1,   32,   33,
      -1,   34,   -1,   -1,   35,   36,   -1,   -1,
      37,   -1,   38,   39,   -1,   -1,   40,   41,
      42,   43,   -1,   44,   -1,   45,   -1,   46,
      47,   48,   49,   -1,   50,   51,   -1,   52,
      53,   -1,   -1,   -1,   54,   55,   -1,   56,
      -1,   57,   -1,   -1,   58,   -1,   59,   -1,
      -1,   -1,   60,   -1,   61,   62,   63,   -1,
      64,   -1,   65,   66,   67,   68, -389, -176,
      -2,   -1,   -1,   71,   72,   73,   74,   -1,
      75,   -1,   76,   77,   78,   -1,   -1,   79,
      -1,   80,   81,   82,   83,   84,   85,   86,
      87,   -1,   -1,   88,   89,   -1,   -1,   90,
      -1,   91,   -1,   92,   93,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   94,   95,
      96,   -1,   -1,   97,   -1,   -1,   98,   -1,
      99,   -1,   -1,   -1,   -1,  100,   -1,  101,
      -1,   -1,   -1,   -1,   -1,   -1,  102,   -1,
      -1,   -1,   -1,  103,   -1,   -1,  104,   -1,
      -1,  105,   -1,  106,  107,   -1,  108,  109,
     110,   -1,  111,   -1,  112,  113,  114,   -1,
     115, -503,  118,   -1,  119,  120, -498,  123,
      -1,  124,  125,  126, -124,   -2,   -1,  127,
     128, -129,   -2,   -1,  129,  130,  131,   -1,
     132,   -1,   -1,  133,  134,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,  135,  136,
     137,  138,   -1,   -1,  139,   -1,  140,   -1,
      -1,   -1,  141,  142,  143,   -1,  144,   -1,
     145,  146,   -1,  147,   -1,  148,  149,  150,
      -1,   -1,  151,   -1,  152,  153,  154,   -1,
      -1,  155,  156,   -1,   -1,   -1,  157,  158,
     159,  160,   -1,  161,   -1,   -1,  162,  163,
     164,   -1,  165,   -1,  166,  167,   -1,   -1,
      -1,  168,  169,   -1,   -1,  170,  171,   -1,
      -1,  172,  173,   -1,   -1,  174,  175,  176,
     177,  178,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,  179,  180,   -1,  181,  182,  183,
      -1,   -1,  184,   -1,  185,  186,   -1,   -1,
     187,   -1,   -1,   -1,   -1,   -1,  188,  189,
      -1,  190,   -1,  191,  192,  193,  194,   -1,
      -1,  195,   -1,   -1,   -1,  196,  197,   -1,
      -1,   -1,  198,  199,   -1,   -1,  200,   -1,
      -1,   -1,  201,  202,  203,   -1,   -1,  204,
    -664,  207,  -40,   -2,   -1,  208,  209,   -1,
      -1,  210,   -1,   -1,  211,   -1,  212,  213,
     214,   -1,   -1,   -1,   -1,  215,   -1,   -1,
      -1,  216,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,  217,   -1,  218,   -1,   -1,  219,
      -1,   -1,   -1,   -1,  220,   -1,   -1,   -1,
     221,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,  222,   -1,
      -1,   -1,   -1,   -1,   -1,  223,   -1,   -1,
      -1,   -1,   -1,  224,   -1,  225,   -1,  226,
      -1,   -1,   -1,   -1,   -1,   -1,  227,   -1,
      -1,  228,   -1,   -1,   -1,   -1,   -1,  229,
     230,   -1,   -1,  231,  232,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,  233,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,  234,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,  235,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,  236,   -1,   -1,  237,   -1,
     238,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
     239,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,  240,  241,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,  242,   -1,   -1,   -1,  243,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,  244
  };

const struct FMOption *
FunctionModelLookup::get (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = wordlist[index].name;

              if (*str == *s && !strcmp (str + 1, s + 1))
                return &wordlist[index];
            }
          else if (index < -TOTAL_KEYWORDS)
            {
              register int offset = - 1 - TOTAL_KEYWORDS - index;
              register const struct FMOption *wordptr = &wordlist[TOTAL_KEYWORDS + lookup[offset]];
              register const struct FMOption *wordendptr = wordptr + -lookup[offset + 1];

              while (wordptr < wordendptr)
                {
                  register const char *s = wordptr->name;

                  if (*str == *s && !strcmp (str + 1, s + 1))
                    return wordptr;
                  wordptr++;
                }
            }
        }
    }
  return 0;
}
