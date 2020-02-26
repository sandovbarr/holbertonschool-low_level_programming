#include "holberton.h"

/**
 * _puts_recursion - print a string using recursion
 * @s: pointer to string
 * Return: none
 */

void _puts_recursion(char *s)
{

	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');

}
