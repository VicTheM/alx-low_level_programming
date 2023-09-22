#include "main.h"

/**
 * leet - encodes a string in 1337
 * @s: string to be encoded
 *
 * Return: the resulting string;
 */
char *leet(char *s)
{
	int i = 0, j;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	while (s[i] != '\0')
	{
		j = 0;
		while (j < 10)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
			}
			j++;
		}
		i++;
	}

	return (s);
}
