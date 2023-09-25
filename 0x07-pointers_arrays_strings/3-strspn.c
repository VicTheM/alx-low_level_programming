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
	unsigned int len = 0;
	unsigned int ii = 0;
	unsigned int jj;
	char *source = accept;
	char *ss = s;

	while (*source)
	{
		jj = 0;
		while (ss[jj] != '\n')
		{
			if (*source == ss[jj])
			{
				if (jj > len)
					len = jj;
				break;
			}
			jj++;
		}
		source++;
	}

	return (len);
}
