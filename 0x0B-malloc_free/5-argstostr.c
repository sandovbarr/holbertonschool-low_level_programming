#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the
 * arguments of your program.
 * @ac: arguments count
 * @av: pointer to values
 * Return: pointer.
 */

char *argstostr(int ac, char **av)

{
	char *arrayconc;
	int i, j, count = 0, count1 = 0;

	if (ac == 1 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			count++;
		}
		count++;
	}
	count++;

	arrayconc = malloc(sizeof(char) * (count + ac));

	if (arrayconc == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			arrayconc[count1] = av[i][j];
			count1++;
		}
		arrayconc[count1] = '\n';
		count1++;
	}
	arrayconc[count1] = '\0';
	return (arrayconc);

}
