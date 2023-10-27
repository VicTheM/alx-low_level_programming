#include "main.h"

/**
 * get_bit - get bit.
 * @n: num
 * @index: Index
 *
 * Return: the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num;
	unsigned int i = 0, bitt;

	if (index > 64)
		return (-1);

	while (i <= index)
	{
		num = n >> 1;
		bitt = n - (num << 1);
		n = num;
		i++;
	}
	return (bitt);
}
