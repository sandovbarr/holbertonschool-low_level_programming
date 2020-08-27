#include "search_algos.h"

/**
 * interpolation_search - function that searches for a value in
 * a sorted arrayay of integers using the
 * interpolation algorithm
 * @array: is a pointer to the first element of the arrayay to search in
 * @size: is the number of elements in arrayay
 * @value: is the value to search for
 * Return: the first index where value is located
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t mid;

	while (low < high)
	{
		mid = low + ((value - array[low]) *
		(high - low) / (array[high] - array[low]));

		if (mid > size - 1)
		{
			printf("Value checked array[%lu] is out of range\n", mid);
			return (-1);
		}
		else
			printf("Value checked array[%lu] = [%d]\n", mid, array[mid]);
		if (array[mid] < value)
		low = mid + 1;
		else if (value < array[mid])
		high = mid - 1;
		else
		return (mid);
	}

	if (value == array[low])
		return (low);
	else
		return (-1);
}
