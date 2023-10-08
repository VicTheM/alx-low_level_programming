#include "main.h"
#include <stdlib.h>
/**
 * _calloc - mimics the calloc() function
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointr to array or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int c;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	for (c = 0; c < (nmemb * size); c++)
		arr[c] = 0;
	return (arr);
}
