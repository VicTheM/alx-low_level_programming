#include "main.h"

/**
 * _strlen - Finds the length of string
 * @s: pointer
 *
 * Return: Length of string
 */
int _strlen(char *s)
{
	char *str = s;
	int len = 0;

	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * _strcat - Concatenates two strings
 * @dest: pointer to old string.
 * @src: additional string
 *
 * Return: dest = dest + src.
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = _strlen(dest);
	int src_len = _strlen(src);
	int i = 0, n = dest_len + src_len;

	while (i < src_len)
	{
		char *loc = (dest + dest_len + i);

		*loc = src[i];
		i++;
	}
	dest[n] = '\0';
	return (dest);
}
