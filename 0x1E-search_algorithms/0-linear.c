#include "search_algos.h"
/**
 * linear_search - function that searches for a value
 * in an array of integers using the
 * Linear search algorithm
 * @array: pointer to firs index of array
 * @size: number of elements in array
 * @value: value to search
 * Return: the first index where value is located
 * If value is not present in array or if array
 * is NULL, your function must return -1
 */


int linear_search(int *array, size_t size, int value)
{
	size_t idx = 0;

	if (!array)
		return (-1);
	for (idx = 0; idx < size; idx++)
	{
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
	}
	return (-1);
}
