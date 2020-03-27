#include "holberton.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: number
 * @index: index for search the bit
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);
/*
 *	n will be moved index positions to find the expect bit
 *	n >> index;
 *	n will be compared with 1 binary to select the last bit
 *	n & 1;
 */
	return ((n >> index) & 1);
}
