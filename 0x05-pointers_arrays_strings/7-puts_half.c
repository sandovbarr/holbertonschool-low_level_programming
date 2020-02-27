#include "holberton.h"

/**
 * puts_half - print the second half of string.
 * @str: string that comes for main function
 * Return: Always 0.
 */

void puts_half(char *str)
{


	int t, i;

	for (t = 0; *(str + t) != '\0'; t++)
	{
	}

	if (!(t % 2 == 0))
	{
		t = t - 1;
	}

	for (i = (t / 2); i < t ; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
