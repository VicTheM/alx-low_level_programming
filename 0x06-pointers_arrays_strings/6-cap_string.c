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
 * cap_string - Capitalizes all words of a string.
 * @s: Pointer to array
 *
 * Return: Uppercase letters of the first letter of each work.
 */
char *cap_string(char *s)
{
	int len = _strlen(s);
	int i = 0;
	char seps[] = {
		',', ';', '.', '!', '?',
		"\"", '(', ')', '{',
		'}', '\t', ' ', '\n'};
	int sep_len = _strlen(seps);

	while (i < len)
	{
		char c = *(s + i);
		char c1 = *(s + i + 1);
		int j = 0;

		while (j < sep_len)
		{
			if (c == *(seps + j) || isspace(c))
			{
				if (c1 >= 'a' && c1 <= 'z')
				{
					char *loc = (s + i + 1);

					*loc = c1 - 32;
					break;
				}
			}
			j++;
		}
		i++;
	}
	return (s);
}
