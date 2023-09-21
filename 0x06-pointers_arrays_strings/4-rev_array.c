#include "main.h"

/**
 * reverse_array - mirrors an array
 * @a: array name
 * @n: array size
 *
 * Return: void
 *
 */

void reverse_array(int *a, int n)
{
	int ii;
	int temp[n];

	for (ii = 0; ii < n; ii++)
		temp[n - 11 - 1] = a[ii];
	for (ii = 0; ii < n; ii++)
		a[ii] = temp[ii];
}
