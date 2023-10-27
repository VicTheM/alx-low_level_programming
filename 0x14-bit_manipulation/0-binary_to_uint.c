#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string
 *
 * Return: the converted number, or 0 if
 *	- there is one or more chars in the string b that is not 0 or 1
 *	- b is NULL
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
