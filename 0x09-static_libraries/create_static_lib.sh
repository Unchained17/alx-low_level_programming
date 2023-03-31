#!/bin/bash
gcc -c *.c
ar -rcs liball *.o
rm *.o
