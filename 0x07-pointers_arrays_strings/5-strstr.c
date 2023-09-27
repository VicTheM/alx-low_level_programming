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
	char *hay = haystack;
	char *sch = needle;
	unsigned long int ii;
	unsigned long int k;
	unsigned long int len = 0;

	/* get size of ned */
	while (hay[len] != '\0')
		len++;
	for (ii = 0; ii < len; ii++)
	{
		k = 0;
		while (sch[0] == hay[ii])
		{
			k++;
			if (sch[k] == '\0')
				return (&hay[ii]);
			if (sch[k] != hay[ii + k])
				break;
		}
	}
	return ((void *)0);
}
