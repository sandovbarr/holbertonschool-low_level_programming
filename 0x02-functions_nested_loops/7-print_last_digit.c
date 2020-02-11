#include "holberton.h"
/**
 * print_last_digit - give the last digit
 * @x: integer
 * Return: integer
 */

int print_last_digit(int x)
{
	if (x < 0)
	{
		x = x * -1;
		x = x % 10;
	}
	else
	{
		x = x % 10;
	}

	_putchar (x);
	return (x);
}
