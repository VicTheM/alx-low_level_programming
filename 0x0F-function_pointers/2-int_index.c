#include "function_pointers.h"
/**
 * int_index - searches for an int in  an arr
 * @array: pool to search
 * @size: size
 * @cmp: does the actual searching
 *
 * Return: index to char in arr or -1 for failure
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int c;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		for (c = 0; c < size; c++)
		{
			if (cmp(array[c]))
				return (c);
		}
	}
	return (-1);
}
