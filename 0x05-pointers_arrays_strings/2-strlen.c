#include "holberton.h"
#include <string.h>

/**
 * _strlen - return teh leng of a string
 * @s: is a char
 * Return:an integer
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
