#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Write a function that concatenates two strings.
 * @s1: strin1
 * @s2: string2
 * Return: pointer.
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, t, m, n;
	int o = 0;
	char *p;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
	{
	}

	for (j = 0; s2[j]; j++)
	{
	}

	t = (i + j) + 1;

	p = malloc(sizeof(char) * t);

	if (p == NULL)
		return (NULL);

	for (m = 0; m <= i; m++)
	{
		p[m] = s1[m];
	}
	for (n = i; n <= t; n++)
	{
		p[n] = s2[o];
		o++;
		if (s2[o - 1] == '\0')
			break;
	}

	return (p);
}
