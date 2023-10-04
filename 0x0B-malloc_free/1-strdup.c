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
	unsigned int len;
	char *dup_str;

	len = 0;
	while (*(str + len))
		len++;
	dup_str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL || dup_str == NULL)
		return (NULL);
	len++;
	*(dup_str + len - 1) = '\0';
	while (len > 0)
	{
		*(dup_str + len - 2) = *(str + len - 2);
		len--;
	}
	return (dup_str);
}
