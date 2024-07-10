#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: string to be scanned
 * @accept: string containing the characters to match.
 *
 * Return: a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j, matchFound = 0;
	char *str = s;

	while (s[i] != '\0' && !matchFound)
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				matchFound = 1;
				str--;
				break;
			}
			j++;
		}
		str++;
		i++;
	}
	if (*str)
		return (str);
	return (NULL);
}
