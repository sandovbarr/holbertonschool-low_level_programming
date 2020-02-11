#include "holberton.h"

/**
* main - give a alphabetic in lowercase
* Return: 0
*/

void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
