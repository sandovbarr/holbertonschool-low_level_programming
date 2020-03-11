#include <stdlib.h>

/**
 * array_iterator - function that executes a function given as a parameter
 * on each element of an array.
 * @array: pointer to array of other function
 * @size: is the size of array
 * @action: pointer to other function
 * Return: none
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
