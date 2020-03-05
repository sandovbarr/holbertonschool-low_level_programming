#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function that allocates memory
 * for an array, using malloc.
 * @nmemb: cant of members
 * @size: size of members
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int i;
	int res;

	res = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(res);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < res; i++)
	{
		ptr[i] = '\0';
	}
	return (ptr);
}
