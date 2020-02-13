#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_line - print lines or spaces
 * @n: integer for count
 * Return: none
 */

void print_line(int n)

{

	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}

}
