#include "holberton.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: my string
 * Return: none.
 */

void _puts(char *str)
{

	char *p;

	p = str;

	while (*p != '\0')
	{
		_putchar(*p);
		p++;
	}
	_putchar('\n');
}
