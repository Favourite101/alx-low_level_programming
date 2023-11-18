#!/bin/bash
gcc -c -Wall -Wextra -Werror -pedantic -std=gnu89 *.c
ar -cr liball.a *.o
ranlib liball.a
