#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: Any integer
 * Return: Absolute Number
 */
int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}
