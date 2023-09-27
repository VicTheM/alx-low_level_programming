#include <stdio.h>

/**
 * print_diagsums - prints sum of matrix diagonals
 * @a: pointer to square matrix
 * @size: size of one dimension of square matrix
 *
 * Return: void
 *
 */
void print_diagsums(int *a, int size)
{
	unsigned long sum_leading = 0;
	unsigned long sum_trailing = 0;
	int ii = 0;
	int jj = 0;

	while (ii < (size * size))
	{
		sum_leading += a[ii + jj];
		sum_trailing += a[ii + size - 1 - jj];
		ii += size;
		jj++;
	}
	printf("%lu, %lu\n", sum_leading, sum_trailing);
}
