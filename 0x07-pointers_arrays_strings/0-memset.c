#include "main.h"

/**
 * _memset - fills a buffer with a const char
 * @s: pointer to buffer memory
 * @b: constant char
 * @n: number of bytes to fill
 *
 * Return: pointer to buffer
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int ii;
	char *ss;

	ss = s;
	for (ii = 0; ii < n; ii++)
	{
		ss[ii] = b;
	}

	return (s);
}
