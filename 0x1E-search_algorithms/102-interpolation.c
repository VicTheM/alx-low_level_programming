#include "search_algos.h"

/**
 * interpolation_search - A linear like version of binary search
 *
 * used on sorted items
 * @aray: the array
 * @size: lenght of array
 * @value: search key
 *
 * Return: key index or -1 on failure
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos;
	size_t low = 0;
	size_t high = size - 1;

	if (!array || size < 1)
		return (-1);

	while ((array[low] < array[high]) && (array[low] <= value) &&
			(value <= array[high]))
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));

		if (low > pos || pos > high)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}

		printf("Value checked array[%ld] = [%i]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	if (value == array[low])
	{
		printf("Value cheked array[%ld] = [%i]\n", low, array[low]);
		return (low);

	}


	pos = low + (((double)(high - low) / (array[high] - array[low]))
			* (value - array[low]));
	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
