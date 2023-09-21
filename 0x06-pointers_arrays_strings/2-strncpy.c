#include "main.h"

/**
 * _strncpy - copies the content of one string into another
 * @dest: destination buffer
 * @src: source string
 * @n: num of byte to be copied
 *
 * Return: @dest
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int ii;

	for (ii = 0; ii < n && src[ii] != '\0'; ii++)
	{
		dest[ii] = src[ii];
	}
	for ( ; ii < n; ii++)
	{
		dest[ii] = '\0';
	}

	return (dest);
}
