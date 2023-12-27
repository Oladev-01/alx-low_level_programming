#!/usr/bin/bash
gcc -Wall -pedantic -Werror -Wextra -fPIC -shared -o liball.so *.c -I.
