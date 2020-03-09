#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog.
 * @name: pointer to structure.name
 * @age: age of the new dog
 * @owner: pointer to new owner
 * Return: pointer to new data
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pointer;
	char *namecopy, *ownercopy;
	int i, j, m, n;

	for (i = 0; name[i]; i++)
	{}
	for (j = 0; owner[j]; j++)
	{}

	namecopy = malloc(i + 1);
	if (namecopy == NULL)
		return (NULL);

	ownercopy = malloc(j + 1);
	if (ownercopy == NULL)
	{
		free(namecopy);
		return (NULL);
	}

	for (m = 0; m <= i; m++)
		namecopy[m] = name[m];

	for (n = 0; n <= j; n++)
		ownercopy[n] = owner[n];

	pointer = malloc(sizeof(dog_t));
	if (pointer == NULL)
	{
		free(namecopy);
		free(ownercopy);
		return (NULL);
	}

	pointer->name = namecopy;
	pointer->age = age;
	pointer->owner = ownercopy;
	return (pointer);
}
