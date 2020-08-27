#include "search_algos.h"
#include <math.h>

/**
 * jump_search - function that searches for a value in
 * a sorted array of integers using the
 * Jump search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump_itvl = sqrt(size);
	size_t step = 0;

	if (!array)
		return (-1);

	while (step <= size)
	{
		printf("Value checked array[%lu] = [%d]\n", step, array[step]);
		if (array[step] == value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",step - jump_itvl ,step);
			for(size_t i = step - jump_itvl; i <= step; i++)
			{
				printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			}
			return (step);
		}
		step += jump_itvl;
		if (array[step] > value)
			step--;
	}
	return(-1);
}
