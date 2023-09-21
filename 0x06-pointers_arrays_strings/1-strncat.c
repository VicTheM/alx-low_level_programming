#include "main.h"
i

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
	int len1;
	int ii;

	ii = 0;
	len1 = 0;
	while (*one)
	{
		++len1;
		one++;
	}
	while (*two && ii < n)
	{
		dest[len1] = *two;
		two++;
		len1++;
		ii++;
	}
	*two = '\0';
	return (dest);
}
