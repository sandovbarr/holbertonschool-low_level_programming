#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - Write a function that allocates
 * memory using malloc.
 * @b: unsigned integer
 * Return: Always 0.
 */

void *malloc_checked(unsigned int b)
{

	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);

}
