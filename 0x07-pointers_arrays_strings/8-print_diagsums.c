#include <stdio.h>

/**
 * print_diagsums - print the sum of diag of matrix
 * @a: pointer to matrix position
 * @size: the size of matrix
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)

{
	int f, c;
	int d1 = 0, d2 = 0, aux = 0;

	for (f = 0; f < size ; f++)
	{
		for (c = 0; c < size; c++)
		{
			if (f == c)
			{
				d1 += *(a + aux);
			}
			if (f + c + 1 == size)
			{
				d2 += *(a + aux);
			}
			aux++;
		}

	}
	printf("%i, ", d1);
	printf("%i\n", d2);
}
