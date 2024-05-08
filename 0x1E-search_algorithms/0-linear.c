#include "search_algos.h"

/**
 * liner_search - searches an array linerly
 * avg_time_complexity: O(n)
 *
 * @array: Array to search in
 * @size: length of the array
 * @value: value to search for
 *
 * Return: Index of the first occurence of @value or -1
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int counter;

	if (!array || size < 1)
		return (-1);

	for (counter = 0; counter < size; counter++)
	{
		printf("Value checked array[%u] = [%i]\n", counter, array[counter]);
		if (array[counter] == value)
			return (counter);
	}

	return (-1);
}
