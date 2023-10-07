#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates a character in a string
 * @s: string
 * @c: character
 *
 * Return: a pointer to the first occurrence of the character c in the string s
 */

char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
	{
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
