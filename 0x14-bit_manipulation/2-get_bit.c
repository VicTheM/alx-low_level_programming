#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: Number
 * @index: Index
 *
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num;
	unsigned int i = 0, bit;

	if (index > 64)
		return (-1);

	while (i <= index)
	{
		num = n >> 1;
		bit = n - (num << 1);
		n = num;
		i++;
	}
	return (bit);
}
