#include <stdlib.h>
#include <stdio.h>
/**
 * main - give a alphabetic in lowercase-reverse
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'z' ; c >= 'a' ; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
