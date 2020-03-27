#include "holberton.h"

/**
 * clear_bit - that sets the value of a bit to 0 at a given index.
 * @n: pointer to int
 * @index: index to move the number
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a = 1;
/*
 * the condition works cuz th max bits allowed to represent an integer is 64
 */
	if (index >= 64)
		return (-1);

/*
 * a is moved to left side index bits to compare with the original number n
 */
	a = a << index;
/*
 * pointer is compared with the negation of a variable and set as new *n
 */
	*n = *n & ~a;
	return (1);
}
