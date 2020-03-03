#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory, which contains a copy
 * of the string given as a parameter.
 * @str: string given
 * Return: new pointer.
 */

char *_strdup(char *str)
{
	int i, j;

	for (i = 0; str[i]; i++)
	{
	}

	char *p = malloc(sizeof(char) * i);

	if (p == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
	{
		p[j] = str[j];
	}

	return (p);
}
