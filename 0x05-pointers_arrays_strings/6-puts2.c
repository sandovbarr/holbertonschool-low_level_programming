#include "holberton.h"

/**
 * puts2 - print the positions pairs.
 * @str: string that comes for main function
 * Return: Always 0.
 */

void puts2(char *str)
{
	int l, i;

	for (l = 0; *(str + l) != '\0'; l++) /* calcula tamaño del array */
	{
	}

	for (i = 0; i < l; i += 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
