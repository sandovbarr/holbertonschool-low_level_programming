#include "holberton.h"

/**
 * print_rev - prints a string, followed by a new line, in reverse
 * @s: the string wich has beem recived
 * Return: none.
 */

int _strlen(char *s)
{

	char *string;
	int count = 0;

	string = s;

	while (*string != '\0') /*mientras que mi apuntador difiera de "\0" */
	{
		count++;  /*acá aumenta mi contador*/
		string++; /*acá aumenta mi posicion del apuntador*/
	}

	return (count);

}


void print_rev(char *s)
{

	int tam = (_strlen(s) - 1);

	char *p;

	p = s;

	for  (tam =  tam; tam >= 0 ; tam--)
	{
		_putchar(p[tam]);
	}
	_putchar('\n');
}
