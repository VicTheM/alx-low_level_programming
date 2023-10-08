#include "main.h"
#include <sdtlib.h>
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
	int i;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < (max - min + 1); i++)
	{
		arr[i] =  min;
		min++;
	}
	return (arr);
}
