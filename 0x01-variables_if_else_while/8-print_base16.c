#include <stdlib.h>
#include <stdio.h>
/**
 * main - give a alphabetic in lowercase
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = '0' ; c <= '9' ; c++)
	{
		putchar(c);
	}
	for (c = 'a' ; c <= 'f' ; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
