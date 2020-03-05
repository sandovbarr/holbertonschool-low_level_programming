#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - function that creates
 * an array of integers.
 * @min: min of intergers
 * @max: max of integers
 * Return: pointer to the new array
 * If min > max, return NULL
 * If malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int *ptr;
	int res = (max - min) + 1 , i;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * res);
	if (ptr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		ptr[i] = i;
	}

	return (ptr);

}
