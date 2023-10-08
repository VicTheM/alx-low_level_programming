#include "main.h"
#include <stdlib.h>

void *_realloc(void *ptr, unsigned int old_size, unsighed int new_size)
{
	unsigned int min_size;
	unsigned int c;
	void *arr;

	if (new_size == old_size)
		return (ptr);
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		free(ptr);
		arr = malloc(new_size);
		return (arr);
	}
	if (new_size > old_size)
		min_size = old_size;
	else
		min_size = new_size;
	arr = malloc(new_size);
	if (arr == NULL)
		return (NULL);
	for (c = 0; c < min_size; c++)
		arr[c] = ptr[c];
	free(ptr);
	return (arr);
}
