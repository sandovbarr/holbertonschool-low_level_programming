#include "holberton.h"

/**
 * puts_half - print the second half of string.
 * @str: string that comes for main function
 * Return: Always 0.
 */

void puts_half(char *str)
{


	int l, i, midh;

	for (l = 0; *(str + l) != '\0'; l++)
	{
	}

	midh = l / 2;

	for (i = midh; i < l; i++)
	{
		_putchar(*(str + i));
	}
_putchar('\n');
}
