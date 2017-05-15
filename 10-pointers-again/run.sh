#!/usr/bin/env bash
# Exit on error
set -e

# Relocate to this file's directory
cd "$(dirname "${BASH_SOURCE[0]}")"

# Compile our file
g++ -Wall -Wno-write-strings main.cpp -o main.out

# Run our file
valgrind --quiet ./main.out
