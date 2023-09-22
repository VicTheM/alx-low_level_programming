#include "main.h"

/**
 * reverse_array - mirrors an array
 * @a: array name
i * @n: array size
 *
 * Return: void
 *
 */

void reverse_array(int *a, int n)
{
	int ii;
	int temp;

	for (ii = 0; ii < n / 2; ii++)
	{
		temp = a[n - 1 - ii];
		a[n - 1 - ii] = a[ii];
		a[ii] = temp;
	}
}
