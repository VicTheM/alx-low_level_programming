#include <stdio.h>

/**
 * print_diagsums - prints sum of matrix diagonals
 * @a: pointer to 2 X 2 matrix
 * @size: size of one dimension of square matrix
 *
 * Return: void
 *
 */
void print_diagsums(int *a, int size)
{
	unsigned int sum_leading = 0;
	unsigned int sum_trailing = 0;
	int ii, jj;

	for (ii = 0; ii < size; ii++)
	{
		sum_leading += a[ii][ii];
		sum_trailing += a[size - 1 - ii][size - 1 - ii];
	}
	printf("%u, %u\n", sum_leading, sum_trailing);
}
