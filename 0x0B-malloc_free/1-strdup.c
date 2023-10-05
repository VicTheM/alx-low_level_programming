#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicates a string to a new mwmory
 * @str: string to be duplicated
 *
 * Return: pointer to new str memory, otherwise NULL
 */
char *_strdup(char *str)
{
	int len = 0;
	int i = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	while (*(str + len))
		len++;
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	return (s);
}
