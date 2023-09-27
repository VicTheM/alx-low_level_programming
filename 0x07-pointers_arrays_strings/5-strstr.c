#include "main.h"

/**
 * _strstr - finds a string in a string
 * @haystack: larger string
 * @needle: search string
 *
 * Return: pointer to begining of found string
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int a = 0, b = 0;

	while (haystack[a])
	{
		while (needle[b])
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}

			b++;
		}

		if (needle[b] == '\0')
		{
			return (haystack + a);
		}

		a++;
	}

	return ('\0');
}
