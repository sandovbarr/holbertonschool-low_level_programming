#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free the contents od the structure pointed
 * @d: pointer to structure
 * Return: none
 */


void free_dog(dog_t *d)
{

	free(d->name);
	free(d->owner);
	free(d);

}
