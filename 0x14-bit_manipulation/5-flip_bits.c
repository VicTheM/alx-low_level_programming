#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: First Number
 * @m: Second Number
 *
 * Return: number of flip bits required
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num, num1;
	unsigned int flips = 0, bit;

	num = n ^ m;
	while (num != 0)
	{
		num1 = num >> 1;
		bit = num - (num1 << 1);
		if (bit == 1)
			flips += 1;
		num = num1;
	}
	return (flips);
}
