#include "search_algos.h"
/**
 * binary_search - function that searches for a value
 * in an array of integers using the
 * binary search algorithm
 * @array: pointer to firs index of array
 * @size: number of elements in array
 * @value: value to search
 * Return: the index where value is located
 * If value is not present in array or if array
 * is NULL, function must return -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t min = 0, max = size - 1, mid = 0;

	if (!array)
		return (-1);

	while (min <= max)
	{
		print_array(array, min, max);

		if (min != max)
			mid = min + ((max - min) / 2);
		else
			mid = min;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			min = mid + 1;
		else
			max = mid - 1;
	}
	return (-1);
}

/**
 * print_array - prints array given
 * @array: pointer to array
 * @min: min to print
 * @max: max to print
 * Return: none
 */
void print_array(int *array, size_t min, size_t max)
{
	printf("Searching in array: ");
	while (min <= max)
	{
		if (min == max)
			printf("%d\n", array[min]);
		else
			printf("%d, ", array[min]);
		min++;
	}
}
