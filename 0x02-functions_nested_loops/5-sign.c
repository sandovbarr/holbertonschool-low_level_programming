#include "holberton.h"
/**
 * print_sign - give the sign of a number
 * @n: integer
 * Return: integer
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	{
		_putchar ('-');
		return (-1);
	}
}
