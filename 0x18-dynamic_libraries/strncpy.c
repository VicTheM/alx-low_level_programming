#include "main.h"

/**
  * _strncpy - Copies a string , for n characters.
  * @dest: pointer to old string
  * @src: new string
  * @n: the number of characters
  *
  * Return: dest = dest + src[n]
  */
char *_strncpy(char *dest, char *src, int n)
{
	int src_len = _strlen(src);
	int i = 0;

	while (i < src_len && i < n)
	{
		char *loc = (dest + i);

		*loc = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
