#include <stdlib.h>
#include <stdio.h>
/**
 * main - give a alphabetic in lowercase
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
