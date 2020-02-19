#include "holberton.h"

/**
 * puts_half - print the second half of string.
 * @str: string that comes for main function
 * Return: Always 0.
 */

void puts_half(char *str)
{


	int l, i;

	for (l = 0; *(str + l) != '\0'; l++)
	{
	}

	if (!(l % 2 == 0))
	{
		l = l + 1;
	}

	for (i = (l / 2); i < l ; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
