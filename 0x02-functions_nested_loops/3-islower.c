#include "holberton.h"

/**
 * _islower - give alphabetic in lowercase
 * @c: integer
 * Return: int number
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
