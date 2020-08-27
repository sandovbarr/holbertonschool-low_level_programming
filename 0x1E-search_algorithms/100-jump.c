#include "search_algos.h"

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
	size_t itvl = sqrt(size);
	size_t step = 0;
	size_t i = 0;

	if (!array)
		return (-1);

	while (step <= size)
	{
		printf("Value checked array[%lu] = [%d]\n", step, array[step]);
		if (array[step + itvl] >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", step, step + itvl);
			for (i = step; i <= step + itvl; i++)
			{
				if (array[i] == value)
				{
					printf("Value checked array[%lu] = [%d]\n", i, array[i]);
					return (i);
				}
				printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			}
		}
		step += itvl;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", step - itvl, step);
	printf("Value checked array[%lu] = [%d]\n", step - itvl, array[step - itvl]);
	return (-1);
}
