#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Number
 * @index: Index
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = *n, n1;

	if (index > 64)
		return (-1);

	n1 = ~(1 << index);
	*n = n1 & num;
	return (1);
}
