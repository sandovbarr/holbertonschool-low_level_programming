#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - swap the values with pointers
 * @a: integer
 * @b: integer
 * Return: Always 0.
 */

void swap_int(int *a, int *b)

{

	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
