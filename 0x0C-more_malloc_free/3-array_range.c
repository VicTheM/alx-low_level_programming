#include "main.h"
#include <stdlib.h>
/**
 * array_range - createss an arr given the range
 * @min: min value
 * @max: max value
 *
 * Return: pointer to arr else NULL
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, j;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max + 1 - min));
	if (arr == NULL)
		return (NULL);
	j = min;
	for (i = 0; i < (max + 1 - min); i++)
	{
		arr[i] =  j;
		j++;
	}
	return (arr);
}
