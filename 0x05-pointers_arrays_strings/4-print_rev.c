#include "holberton.h"

/**
 * print_rev - prints a string, followed by a new line, in reverse
 * @s: the string wich has beem recived
 * Return: none.
 */

void print_rev(char *s)
{

	int tam, i;

	for (i = 0; *(s + i) != '\0' ; i++)
	{
	}

	for  (tam = i; tam >= 0 ; tam--)
	{
		_putchar(*(s + tam));
	}
	_putchar('\n');
}
