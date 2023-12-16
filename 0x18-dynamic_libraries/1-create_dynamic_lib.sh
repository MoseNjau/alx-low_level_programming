#!/bin/bash
gcc -c -Wall -wextra -Werror -pedantic -c -fpic *.c
gcc -shared -o liball.so *.o