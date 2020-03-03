#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create array with number of size
 * @size: size of array to create
 * @c: character to put in the array
 * Return: pointer to first position.
 */

char *create_array(unsigned int size, char c)

{
	if (size == 0)
		return (NULL);

	char *array;

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	int i;

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
