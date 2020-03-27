#include "holberton.h"

/**
 * recur - function using recursion to shift number.
 * @x: the number to convert.
 * Return: none
 */

void recur(unsigned long int x)
{
	if (x == 0)
		return;
	recur(x >> 1);
	_putchar((x & 1) + 48);
}

/**
 * print_binary - function that prints
 * the binary representation of a number.
 * @n: the number to convert.
 * Return: none
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar(48);
	else
		recur(n);
}
