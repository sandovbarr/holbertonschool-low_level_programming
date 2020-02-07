#include <stdlib.h>
#include <stdio.h>
/**
 * main - give a numbers from 00 to 99
 * Return: 0
 */
int main(void)
{
	int c,d;

	for (c = '0' ; c <= '9' ; c++)
	{
		for (d = '0' ; d <= '9' ; d++)
		{
			putchar(c);
			putchar(d);

			if (c == '9' && d == '9')
			{
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
