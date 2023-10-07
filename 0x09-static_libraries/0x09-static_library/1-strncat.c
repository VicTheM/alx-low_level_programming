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
  * _strncat - Concatenates two strings, for n characters.
  * @dest: pointer to old string
  * @src: new string
  * @n: the number of characters
  *
  * Return: dest = dest + src[n]
  */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = _strlen(dest);
	int src_len = _strlen(src);
	int i = 0, j;

	while (i < src_len && i < n)
	{
		char *loc = (dest + dest_len + i);

		*loc = src[i];
		i++;
	}
	j = dest_len + i;
	dest[j] = '\0';
	return (dest);
}

