#include "search_algos.h"

int advanced_binary_recursion(int *array, size_t left,
		size_t right, int value);

/**
 * advanced_binary - Searches for a value in an sorted array of
 * integers using the Binary search algorithm.
 *
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: The index where value is located, otherwise -1.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (advanced_binary_recursion(array, 0, size - 1, value));
}

/**
 * advanced_binary_recursion - The recursive implementation of the
 * Binary search algorithm.
 *
 * @array: A pointer to the first element of the array to print.
 * @left: The left index of the subarray.
 * @right: The right index of the subarray.
 * @value: The value to search for.
 *
 * Return: The index where value is located, otherwise -1.
 */
int advanced_binary_recursion(int *array, size_t left, size_t right, int value)
{
	size_t i, mid;

	if (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[right]);

		mid = left + (right - left) / 2;
		if (array[mid] < value)
		{
			return (advanced_binary_recursion(array, mid + 1, right, value));
		}
		else if (array[mid] > value)
		{
			return (advanced_binary_recursion(array, left, mid, value));
		}
		else
		{
			if (mid > left && value == array[mid - 1])
				return (advanced_binary_recursion(array, left, mid, value));
			return (mid);
		}
	}
	return (-1);
}
