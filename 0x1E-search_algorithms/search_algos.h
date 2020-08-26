#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, size_t min, size_t max);

#endif
