#include "holberton.h"

/**
 * print_rev - prints a string, followed by a new line, in reverse
 * @s: the string wich has beem recived
 * Return: none.
 */

void print_rev(char *s)

{

	int i, j;

	for (i = 0; *(s + i) != '\0' ; i++)
	{
	}

	i = i - 1;

	for  (j = i; j >= 0 ; j--)
	{
		_putchar(*(s + j));
	}
	_putchar('\n');
}
