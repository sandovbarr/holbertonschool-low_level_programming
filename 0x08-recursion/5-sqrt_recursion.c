#include "holberton.h"

/**
 * operation - validates n and adds to m
 * @n: integer
 * @m: value to interates
 * Return: integer
 */

int operation(int n, int m)
{

	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}

	if (m * m == n)
	{
		return (m);
	}
	else if (m * m > n)
	{
		return (-1);
	}

	else
	{
		return (operation(n, m + 1));
	}
}

/**
 * _sqrt_recursion - return the root
 * @n: integer
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	return (operation(n, 1));
}
