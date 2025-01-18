#!/bin/bash

# Set sanitizer options
export ASAN_OPTIONS=detect_leaks=1:abort_on_error=1
export UBSAN_OPTIONS=print_stacktrace=1

# Compile with sanitizers
gcc -fsanitize=address,undefined -g -o program program.c

# Run the program
./program
