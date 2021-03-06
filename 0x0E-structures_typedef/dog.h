#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - the first structure of dog
 * @name: member name
 * @age: age of dog
 * @owner: owner of dog
 *
 * description: first structure
 */

typedef struct dog
{

	char *name;
	float age;
	char *owner;

} dog;

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
