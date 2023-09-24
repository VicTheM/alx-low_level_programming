#include "main.h"
#include <stdio.h>
/**
 * size - finds the number of char in string)
 * @text: pointer to string buffer
 *
 * Return: number of char aas int
 */
int size(char *text)
{
	char *buffer = text;
	int ii = 0;

	while(*buffer)
	{
		ii++;
		buffer++;
	}
	return (ii);
}

int max(int *a, int *b)
{
	if (*a > *b)
		return (*a);
	else
		return (*b);
}

/**
 * infinite_add - adds string of integers
 * @n1: first operand
 * @n2: second operand
 * @r: pointer to result (their sum)
 * @size_r: size of result
 *
 * Return: pointer to string of int containing result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	char *num_1 = n1;
	char *num_2 = n2;
	char *result_arr = r;
	int r_arr_size = size_r;
	int size_1 = 0;
	int size_2 = 0;
	char *return_value;
	int ii = 0;
	int jj = 0;
	int carry_over = 48;
	int maxx;

	size_1 = size(num_1);
	size_2 = size(num_2);
	maxx = max(&size_1, &size_2);
	printf("size 1: %d\n", size_1);
	printf("size_2: %d\n", size_2);
	printf("size max: %d\n", maxx);
	if (r_arr_size < (maxx + 2))
	{
		return_value = '\0';
		return (return_value);
	}

	result_arr[size_r - 1] = '\0';
	/* put first string in result */

	while (ii < size_1)
	{
		result_arr[r_arr_size - ii - 2] = num_1[size_1 - ii - 1];
		ii++;
	}

	/* pad beginning with zeros */
	while (ii < r_arr_size)
	{
		result_arr[r_arr_size - ii - 2] = '0';
		ii++;
	}
	printf("r_arr_size: %d\n", ii);
	/* add the second array */

	while (jj < size_2)
	{
		if ((result_arr[r_arr_size - jj - 2] + num_2[size_2 - jj - 1] <= 105) && carry_over == 48)
		{
			result_arr[r_arr_size - jj - 2] += (num_2[size_2 - jj - 1] - 48);
			carry_over = 0;
		}
		else
		{
			result_arr[r_arr_size - jj - 2] += (num_2[size_2 - jj - 1] + carry_over - 106);
			carry_over = 49;
		}
		jj++;
	}

	printf("pending_size %d\n", jj);
	for ( ; jj < r_arr_size; jj++)
	{
		if (result_arr[r_arr_size - jj - 2] + carry_over <= 105)
		{
			result_arr[r_arr_size - jj - 2] += (carry_over - 48);
			carry_over = 48;
		}
		else
		{
			result_arr[r_arr_size - jj - 2] += (carry_over - 58);
			carry_over = 49;
		}
		jj++;
	}
	printf("rr_arr_size: %d\n", jj);
	/* remove padding null */
	while (*result_arr == '0')
	{
		r++;
		result_arr++;
	}
	return (r);
}
