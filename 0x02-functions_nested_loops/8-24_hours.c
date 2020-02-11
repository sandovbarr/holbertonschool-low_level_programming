#include "holberton.h"

/**
 * jack_bauer - give the hour
 * Return: none
 */

void jack_bauer(void)
{
	int h, h2, m, m2;

	for (h = 0; h <= 2; h++)
	{
		for (h2 = 0; h2 <= 3; h2++)
		{
			for (m = 0; m <= 5; m++)
			{
				for (m2 = 0; m2 <= 9; m2++)
				{
					_putchar(h + '0');
					_putchar(h2 + '0');
					_putchar(':');
					_putchar(m + '0');
					_putchar(m2 + '0');
					_putchar('\n');
				}
			}
		}
	}

}
