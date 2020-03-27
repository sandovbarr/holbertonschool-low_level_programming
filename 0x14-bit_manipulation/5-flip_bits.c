#include "holberton.h"

/**
 * flip_bits - function that returns the number
 * of bits you would need to flip to get from one number to another.
 * @n: initial number
 * @m: number to wants be.
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int rxor = 0;
	int counter = 0;

	rxor = n ^ m;

	while (rxor)
	{
		counter += rxor & 1;
		rxor = rxor >> 1;
	}
	return (counter);
}
