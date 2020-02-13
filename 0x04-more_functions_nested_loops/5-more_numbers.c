#include "holberton.h"

/**
 * more_numbers - 10 times to 0 14
 * Return: none
 */

void more_numbers(void)

{

int j;
int k;

for (j = 0; j <= 9; j++)
{
	for (k = 0 ; k <= 14 ; k++)
	{
		if (k >= 10)
		_putchar(k / 10 + 48);
		_putchar(k % 10 + 48);
	}
	_putchar('\n');
}
}
