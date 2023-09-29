#include "main.h"
/**
 * sqrt_helper - expands its mother function
 * @n: subject
 * @iterator: incrementable divisor
 *
 * Return: sqrt of n
 */
int sqrt_helper(int n, int iterator)
{
	if (iterator > n / 2)
		return (-1);
	if (iterator * iterator == n)
		return (iterator);
	return (sqrt_helper(n, iterator + 1));
}

/**
 * _sqrt_recursion - returns natural sqrt of int
 * @n: integer
 *
 * Return: square root as int
 */
int _sqrt_recursion(int n)
{
	if (n < 1)
		return (-1);
	if (n == 1)
		return (1);
	return (sqrt_helper(n, 2));
}
