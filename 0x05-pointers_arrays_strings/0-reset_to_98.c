#include "holberton.h"
#include <stdio.h>

/**
 * reset_to_98 - chage value with pointer.
 * @n: pointer that give direction of n
 * Return: Always 0.
 */

void reset_to_98(int *n)
{

	int *ch;

	ch = n;

	*ch = 98;

}
