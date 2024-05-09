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
 * bs_recursive - a recursing binary search serving as help func
 *
 * @arr: search field
 * @value: search key
 * @l: start index
 * @r: stop index
 *
 * Return: index of search key or -1
 */
int bs_recursive(int *arr, int value, int l, int r)
{
	int mid;

	if (l > r)
		return (-1);

	mid = (l + r) / 2;
	printf("Searching in array: ");
	print_array(arr, l, r + 1);

	if (arr[mid] == value)
	{
		if (arr[mid - 1] == value)
			return (bs_recursive(arr, value, l, mid));
		else
			return (mid);
	}
	else if (arr[mid] > value)
		return (bs_recursive(arr, value, l, mid - 1));
	else
		return (bs_recursive(arr, value, mid + 1, r));

	return (-1);
}


/**
 * Advanced_binary - performs the binary search
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
int advanced_binary(int *array, size_t size, int value)
{
	int left, right;

	left = 0;
	right = size - 1;

	if (!array || size < 1)
		return (-1);

	return (bs_recursive(array, value, left, right));
}
