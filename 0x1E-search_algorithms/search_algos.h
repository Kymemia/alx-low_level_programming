#ifndef search_algos_h
#define search_algos_h

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stddef.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int le_binary_search(int *array, size_t left, size_t right, int value);

#endif
