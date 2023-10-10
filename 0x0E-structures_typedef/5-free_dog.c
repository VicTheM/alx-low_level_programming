#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogt
 * @d: pointer to structure to be freed
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
