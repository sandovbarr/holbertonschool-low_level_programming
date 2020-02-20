#include <stdio.h>

/**
 * print_array - print the positions of array.
 * @a: pointer
 * @n: integer that defines stop of count
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
	int i;
	int tam = sizeof(a) - sizeof(n);

	for (i = 0; i <= tam; i++)
	{
		if (i == tam)
		{
			printf("%d", *(a + i));
			break;
		}
		else
		{
			printf("%d, ", *(a + i));
		}
	}
	printf("\n");
}
