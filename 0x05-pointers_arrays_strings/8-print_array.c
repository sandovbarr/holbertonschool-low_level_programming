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

	for (i = 0; i <= n; i++)
	{
		if (i == n)
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
