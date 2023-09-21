#include "main.h"

/**
 * _strncat - concantenate two strings
 * @dest: pointer to first string
 * @src: pointer to second string
 * @n: number of bit in src to add
 *
 * Return: pointer to concantenated string
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	char *one = dest;
	char *two = src;
	int ii;

	ii = 0;
	while (*one)
	{
		one++;
	}
	while (ii < n && *two)
	{
		*one++ = *two;
		two++;
		ii++;
	}
	*one = '\0';
	return (dest);
}
