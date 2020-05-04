#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic *.c -c -fPIC
gcc -Wall -Werror -Wextra -pedantic *.o -shared -o liball.so
export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH
