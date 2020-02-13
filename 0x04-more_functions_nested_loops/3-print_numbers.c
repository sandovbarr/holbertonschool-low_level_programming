#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - give lopp 0 9
 * Return: none
 */

void print_numbers(void)

{

	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

}
