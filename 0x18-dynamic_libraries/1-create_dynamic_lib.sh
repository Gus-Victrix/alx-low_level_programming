#!/bin/bash
gcc -pedantic -Werror -Wall -Wextra -c *.c
gcc -shared -o liball.so *.o
rm *.o
