#include "main.h"

/**
 * _strpbrk - finds the first occurence of acc in s
 * @s: search string
 * @accept: buffer
 *
 * Return: pointer to the first occurence in s
 *
 */
char *_strpbrk(char *s, char *accept)
{
	char *string = s;
	char *buffer = accept;
	int ii;

	while (*string)
	{
		ii = 0;
		while (buffer[ii] != '\0')
		{
			if (*string == buffer[ii])
				return (string);
			ii++;
		}
		string++;
	}

	return ('\0');
}
