#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - duplicates a string to a new mwmory
 * @str: string to be duplicated
 *
 * Return: pointer to new str memory, otherwise NULL
 *
 
char *_strdup(char *str)
{
	unsigned int len;
	char *dup_str;

	len = 0;

	if (str == NULL)
		return ("");
	while (*(str + len))
		len++;
	dup_str = (char *)malloc(sizeof(char) * (len + 1));
	if (dup_str == NULL)
		return ("");
	len++;
	*(dup_str + len - 1) = '\0';
	while (len > 0)
	{
		*(dup_str + len - 2) = *(str + len - 2);
		len--;
	}
	return (dup_str);
}
*/
char *_strdup(char *str)
{
	int len, i = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	len = strlen(str);
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	while (str[i] != '\0' && len)
	{
		s[i] = str[i];
		i++;
	}
	return (s);
}
