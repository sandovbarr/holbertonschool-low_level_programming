#include "holberton.h"

/**
 * set_bit - set a bit inside a given number
 * @n: pointer to int
 * @index: index to move the number
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a = 1;

	if (index >= 64)
		return (-1);

	a = a << index;
	*n = *n | a;
	return (1);
}
