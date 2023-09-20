#include "main.h"

/**
 * _strcat - concantenate two strings
 * @dest: pointer to first string
 * @src: pointer to second string
 *
 * Return: pointer to concantenated string
 *
 */

char *_strcat(char *dest, char *src)
{
	/* obtain length */
	char *one = dest;
	char *two = src;
	int len1;

	len1 = 0;
	while (*one)
	{
		++len1;
		one++;
	}
	while (*two)
	{
		dest[len1] = *two;
		two++;
		len1++;
	}
	*two = '\0';
	return (dest);
}
