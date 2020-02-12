#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - give numbers to 98
 * @n: varibles of entry
 * Return: none
 */

void print_to_98(int n)
{
	if  (n < 98)
	{
		for (n = n; n <= 98; n++)
		{
			if (n != 98)
			{
				printf("%i, ", n);
			}
		}
	}
	else if (n > 98)
	{
		for (n = n; n >= 98; n--)
		{
			if (n != 98)
			{
				printf("%i, ", n);
			}
		}
	}
	printf("98\n");
}
