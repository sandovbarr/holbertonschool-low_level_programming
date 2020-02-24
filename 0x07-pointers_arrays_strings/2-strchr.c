#include "holberton.h"

/**
 * _strchr - validate character into a string to find it.
 * @s: pointer to string
 * @c: character to validate
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{

	int j;

	for (j = 0; s[j]; j++)
	{
		if (s[j] == c)
			return (&s[j]);
	}
	return (0);
}
