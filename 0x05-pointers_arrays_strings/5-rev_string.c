#include "main.h"
#include <stdlib.h>

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to the string
 * Return: Length of string
 */
int _strlen(char *s)
{
	char *n = s;
	int len = 0;

	while (*n)
	{
		len++;
		n++;
	}

	return (len);
}

/**
 * rev_string - Reverses a string.
 * @s: Pointer of the string.
 */
void rev_string(char *s)
{
	const int len = _strlen(s);
	int i = 0, j = len, k = 0;
	char *n = (char *)malloc(len * sizeof(char)), c;

	while (j)
	{
		char *l = (n + i);

		c = *(s + j - 1);
		*l = c;
		i++;
		j--;
	}

	while (k < len)
	{
		char c = *(n + k);
		char *l = (s + k);

		*l = c;
		k++;
	}
}
