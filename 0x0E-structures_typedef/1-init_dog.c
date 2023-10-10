#include "dog.h"
/**
 * init_dog - initializes the dog struct
 * @d: pointer to dog struct
 * @name: struct element
 * @age: struct element
 * @owner: struct element
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	(*d).age = age;
	d->owner = owner;
}
