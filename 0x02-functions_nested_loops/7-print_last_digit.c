#include "holberton.h"

/**
 * print_last_digit - give the last digit
 * @x: integer
 * Return: integer
 */

int print_last_digit(int x)
{
	x = x % 10;

	if (x < 0)
	{
	x = x * -1;
	}
	_putchar (x + '0');
	return (x);
}
