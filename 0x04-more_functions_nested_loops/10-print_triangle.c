#include "holberton.h"

/**
 * print_triangle - print diag in diag
 * @size: integer for count
 * Return: none
 */

void print_triangle(int size)

{
	char k = 35;
	int f, c;
	int n = size;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{

		for (f = 0; f < n; f++)
		{
			for (c = 0; c < n; c++)
			{
				if (c >= n - 1 - f)
				{
					_putchar(k);
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
