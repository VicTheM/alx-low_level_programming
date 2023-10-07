#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: string to be scanned
 * @accept: string containing the characters to match.
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	unsigned int len = 0, matchFound;

	while (s[i] != '\0')
	{
		j = 0;
		matchFound = len;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
			j++;
		}
		if (matchFound == len)
			break;
		i++;
	}
	return (len);
}
