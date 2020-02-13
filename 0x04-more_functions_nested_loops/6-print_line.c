#include "holberton.h"

/**
 * print_line - print lines or spaces
 * @n: integer for count
 * Return: none
 */

void print_line(int n)

{

	int i;
	char k = 95;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(k);
		}
		_putchar('\n');
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}

}
