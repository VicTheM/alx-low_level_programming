#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string
 *
 * Return: the converted number, or 0 if
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int i, c;

	if (!b)
		return (0);
	i = 0;
	num = 0;
	while (b[i])
	{
		c = b[i] - 48;
		if (c == 0 || c == 1)
		{
			num  = (num << 1) + c;
			i++;
		}
		else
			return (0);
	}
	return (num);
}
