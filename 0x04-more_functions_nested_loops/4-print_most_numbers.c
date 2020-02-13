#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_most_numbers - not 2 & 4
 * Return: none
 */

void print_most_numbers(void)

{

	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (!(i == '2' || i == '4'))
		{
		_putchar(i);
		}
	}
	_putchar('\n');

}
