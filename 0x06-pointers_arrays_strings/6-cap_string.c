#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @s: Pointer to array
 *
 * Return: Uppercase letters of the first letter of each work.
 */
char *cap_string(char *s)
{
	char *string = s;
	int i;
	char seps[] = {',', ';', '.', '!', '?', '\"', '(', ')', '{', '}', '\t', ' ', '\n'};

	if (string[0] >= 'a' && string[0] <= 'z')
		string[0] = string[0] - 32;
	string++;
	while (*string)
	{
		for (i = 0; i < 13; i++)
		{
			if (*string >= 'a' && *string <= 'z' && *(string - 1) == seps[i])
			{
				*string = string[0] - 32;
			}
		}
		string++;
	}

	return (s);
}
