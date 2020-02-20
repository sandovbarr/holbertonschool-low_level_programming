#include "holberton.h"

/**
 * *string_toupper - check the code for Holberton School students.
 * @i: pinter
 * Return: pointer.
 */

char *string_toupper(char *i)
{
	int j;

	for (j = 0; *(i + j) != '\0'; j++)
	{
		if ((*(i + j) >= 97) && (*(i + j) <= 122))
		{
			*(i + j) = *(i + j) - 32;
		}
	}
	return (i);
}
