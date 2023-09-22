#include "main.h"

/**
 * string_toupper - converts string to upper
 * @c: pointer to character
 *
 * Return: pointer to uppercase
 *
 */

char *string_toupper(char *c)
{
	int ii;
/*	char *ptr = c; */

	ii = 0;
	while (c[ii] != '\0')
	{
		if (c[ii] >= 'a' && c[ii] <= 'z')
			c[ii] = c[ii] - 32;
		ii++;
/*		ptr++; */
	}
	return (c);
}
