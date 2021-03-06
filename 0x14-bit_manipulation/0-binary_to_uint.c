#include "holberton.h"

/**
 * binary_to_uint - function that converts
 * a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int loop = 0, base = 1, suma = 0, i = 0, m = 0;
	char *binv;

	if (b == NULL)
		return (0);

	while (b[loop] != '\0')
	{
		if (b[loop] != '0' && b[loop] != '1')
			return (0);
		loop++;
	}

	binv = malloc(sizeof(char) * loop + 1);
	loop--;

	while (loop >= 0)
	{
		binv[i] = b[loop];
		i++, loop--;
	}
	binv[i] = '\0', i = 0;
	for (i = 0; binv[i]; i++)
	{
		if (binv[i] == '1' && i == 0)
		suma = 1;

		if (binv[i] == '1' && i > 0)
		{
			for (m = 0; m < i; m++)
			{
				base *= 2;
			}
			suma += base;
			base = 1;
		}
	}
	free(binv);
	return (suma);
}
