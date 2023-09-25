#include "main.h"

/**
 * _strchr - finds a char in a string buffer
 * @s: pointer to string buffer
 * @c: char to search for
 *
 * Return: pointer to first occurence of c
 */
char *_strchr(char *s, char c)
{
	int ii = 0;

	while (s[ii])
	{
		if (s[ii] == c)
		{
			s += ii;
			return (s);
		}
		ii++;
	}

	return ('\0');
}
