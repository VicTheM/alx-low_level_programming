#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - operate on arr elements with func
 * @array: array
 * @size: size of @rray
 * @action: funnction to operate with
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t c;

	for (c = 0; c < size; c++)
	{
		action(array[c]);
	}
}
