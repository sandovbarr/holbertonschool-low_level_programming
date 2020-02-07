#include <stdlib.h>
#include <stdio.h>
/**
 * main - give us numbers 0-9
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = '0' ; c <= '9' ; c++)
	{
		if (c <= '9')
		{
			putchar(c);

			if (c <= '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
