#include "holberton.h"

/**
 * reverse_array - reverse string.
 * @a: integer
 * @n: integer
 * Return: Always 0.
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = *(a + n);
		*(a + n) = *(a + i);
		*(a + i) = j;
	}

}
