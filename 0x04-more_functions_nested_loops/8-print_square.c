#include "holberton.h"

/**
 * print_line - print lines or spaces
 * @size: integer for count
 * Return: none
 */

void print_square(int size)

{

	int i, j;
	int k = 35;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(k);
			}
			_putchar('\n');
		}
	}
}
