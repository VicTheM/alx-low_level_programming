#include "main.h"
/**
 * _strspn - gets len of s containing all of accept
 * @s: longer string
 * @accept: source string
 *
 * Return: unsigned value of the number of bytes in s
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, t = 0;

	while (accept[a])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				t++;
			}

			b++;
		}

		a++;
	}

	return (t);
}
