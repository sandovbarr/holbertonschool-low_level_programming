#include "holberton.h"

/**
 * print_diagonal - print diag in diag
 * @n: integer for count
 * Return: none
 */

void print_diagonal(int n)

{
	char k = 92;
	int i, j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar(k);
		_putchar('\n');
	}
}
