#include "main.h"
/**
 * _memcpy - copies one memory into another
 * @dest: destination memory
 * @src: source memory
 * @n: number of bytes to be copied
 *
 * Return: pointer to dest;
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int ii;
	char *s;
	char *buffer;

	s = dest;
	buffer = src;
	for (ii = 0; ii < n; ii++)
		*s++ = buffer[ii];

	return (dest);
}
