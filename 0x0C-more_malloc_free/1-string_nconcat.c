#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concantenates string of unknown lenghth
 * @s1: pointer to initial string
 * @s2: pointer to suffix string
 * @n: num of bytes from @s2 to use
 *
 * Return: pointer to new str or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len2 = 0;
	unsigned int len1 = 0;
	unsigned int c = 0;
	char *ss;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for ( ; *(s1 + c); c++)
		len1++;
	for (c = 0; *(s2 + c); c++)
		len2++;
	if (n > len2)
		n = len2;

	ss = malloc(sizeof(char) * (len1 + n + 1));
	if (ss == NULL)
		return (NULL);
	for (c = 0; c < len1; c++)
		ss[c] = s1[c];
	for (c = len1; c < (len1 + n); c++)
		ss[c] = s2[c - len1];
	ss[len1 + n] = '\0';

	return (ss);
}
