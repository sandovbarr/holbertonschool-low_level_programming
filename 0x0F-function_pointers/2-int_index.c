/**
 * int_index -  function that searches for an integer.
 * @array: is a pointer to an arrray
 * @size: is the number of elements in the array.
 * @cmp: is a pointer to the function to be used to compare values
 * Return: index to array
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res;

	if (size <= 0)
		return (-1);

	if (!array || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		res = (*cmp)(array[i]);
		if (res == 1)
			return (i);
	}
	return (-1);
}
