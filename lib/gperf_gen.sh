#!/bin/sh
exec gperf -CDG -t -L C++ -Z FunctionModelLookup -N get ExternalLibrary.gperf \
    > ExternalLibrary.h
