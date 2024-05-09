#include "search_algos.h"
#include <math.h>

/**
 * jump_search - An optimized version of linear search
 *
 * @array: array to search in
 * @size: size of the array
 * @value: value to search for
 *
 * Return: First index of @value or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t steps = sqrt(size);
	size_t start = 0;

	if (!array || size < 1)
		return (-1);
	while (array[start] < value && start < size)
	{
		printf("Value checked array[%ld] = [%i]\n", start, array[start]);
		if (start + steps < size)
		{
			start = start + steps;
			continue;
		}
		else
		{
			start = size - 1;
			break;
		}
	}
	if (array[start] >= value)
	{
		printf("Value found between indexes [%ld] and [%ld]\n",
				start - steps, start);
		start = start - steps;
		for ( ; start <= start + steps; start++)
		{
			printf("Value checked array[%ld] = [%i]\n", start, array[start]);
			if (array[start] == value)
				return ((int)start);
		}
	}
	else
	{
		printf("Value found between indexes [%ld] and [%ld]\n",
				start, start + steps);
		printf("Value checked array[%ld] = [%i]\n", start, array[start]);
	}

	return (-1);
}
