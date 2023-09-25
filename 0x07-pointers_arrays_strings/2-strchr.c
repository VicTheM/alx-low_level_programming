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
	char *cc;
	int ii = 0;

	while (s[ii])
	{
		if (s[ii] == c)
		{
			cc = &s[ii];
			return (cc);
		}
		ii++;
	}
	cc = s[ii];

	return (cc);
}
