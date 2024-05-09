#include "search_algos.h"

/**
 * jump_search - Searches for a value in an sorted array of
 * integers using the Jump search algorithm.
 *
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: The first index where value is located, otherwise -1.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, start, end, i;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt((double)size);
	start = end = i = 0;
	do {
		printf("Value checked array[%ld] = [%d]\n", end, array[end]);
		if (array[end] == value)
			return (end);
		i++;
		start = end;
		end = step * i;
	} while (end < size && array[end] < value);

	printf("Value found between indexes [%ld] and [%ld]\n", start, end);
	for (i = start; i <= end && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
