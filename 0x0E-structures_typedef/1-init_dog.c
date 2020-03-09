#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: addres
 * @name: pointer to name
 * @age: age of the struct
 * @owner: data owner of the structure
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;

}
