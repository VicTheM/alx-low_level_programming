#include "main.h"
#include <stdlib.h>


char *create_array(unsigned int size, char c)
{
	unsigned int counter;
	char *array;

	array = malloc(sizeof(char) * (size));
	if (array == NULL || size == 0)
	{
		return (NULL);
	}
	else
	{
		for (counter = 0; counter < size; counter++)
		{
			array[counter] = c;
		}
	}
	return (array);
}
