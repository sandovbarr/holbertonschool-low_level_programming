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

	while (*string != '\0')
	{
		count++;
		string++;
	}

	return (count);

}
