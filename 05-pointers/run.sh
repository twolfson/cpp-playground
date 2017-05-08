#!/usr/bin/env bash
# Exit on error
set -e

# Compile our file
g++ main.cpp -o main.out

# Run our file
./main.out
