#!/bin/bash
c_files=$(ls *.c)
gcc -shared -o liball.so $c_files
