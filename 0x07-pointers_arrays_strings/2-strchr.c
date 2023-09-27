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
	int a = 0, b;

	while (s[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}

	return ('\0');
}
