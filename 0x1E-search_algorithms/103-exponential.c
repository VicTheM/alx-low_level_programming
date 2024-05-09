#include "search_algos.h"

/**
 * print_array - prints a comma seperated list of items
 *
 * @array: pointer to the beginning of array
 * @start: start of array
 * @end: end of array
 */
void print_array(int *array, int start, int end)
{
	int c;

	for (c = start; c < end - 1; c++)
		printf("%d, ", array[c]);
	printf("%d\n", array[c]);
}


/**
 * exponential_search -
 *
 * @array: search space
 * @size: size of search space
 * @value: search key
 *
 * Return: first index of key or -1 on failure
 */
int exponential_search(int *array, size_t size, int value)
{
	int ret;
	int bound = 1;
	size_t new_size;

	if (!array || size < 1)
		return (-1);

	while ((size_t)bound < size && array[bound] < value)
	{
		printf("Value checked array[%i] = [%i]\n", bound, array[bound]);
		bound *= 2;
	}

	new_size = ((size_t)bound < size ? (size_t)bound : size - 1);
	printf("Value found between indexes [%i] and [%ld]\n", bound / 2, new_size);
	ret = binary_search(array + (bound / 2), 1 + new_size - (bound / 2), value);

	if (ret == -1)
		return (ret);
	return ((bound / 2) + ret);
}


/**
 * binary_search - performs the binary search
 *
 * avg_time_comp: Ologn
 * REQUIREMENT: Array is sorted in ASC && @value is unique
 *
 * @array: array to search in
 * @size: size of array
 * @value: value to search for
 *
 * Return: first ndex of @value or -1
 */
int binary_search(int *array, size_t size, int value)
{
	int left, mid, right;

	left = 0;
	right = size - 1;

	if (!array || size < 1)
		return (-1);

	while (left <= right)
	{
		mid = (left + right) / 2;

		printf("Searching in array: ");
		print_array(array, left, right + 1);

		if (array[mid] == value)
			return (mid);

		if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}

	return (-1);
}
