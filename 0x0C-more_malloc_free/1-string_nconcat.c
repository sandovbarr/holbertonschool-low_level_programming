#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: pointer to string1
 * @s2: pointer to string2
 * @n: unsigned int
 * Return: Always 0.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int i, j, t, p, q;
	char *newstr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
	{}
	for (j = 0; s2[j]; j++)
	{}

	if (n >= j)
		n = j;

	t = i + n;

	newstr = malloc(sizeof(char) * t + 1);

	if (newstr == NULL)
		return (NULL);
	for (p = 0; s1[p]; p++)
		newstr[p] = s1[p];
	for (q = 0; q == n || s2[q]; q++)
	{
		if (q == n)
		{
			newstr[p + q] = '\0';
			return (newstr);
		}
		newstr[p + q] = s2[q];
	}
	return (newstr);
}
