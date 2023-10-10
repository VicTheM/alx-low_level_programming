#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints a struct
 * @d: pointer to struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (!(d->age))
		printf("(nil)\n");
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("(nil)");
	else
		printf("Owner: %s\n", d->owner);
}
