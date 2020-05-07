#!/bin/sh
gcc -c $1.c -o $1.o
objdump -d $1.o >> disassemble.txt
