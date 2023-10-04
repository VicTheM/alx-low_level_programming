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
	dup_str = malloc(sizeof(char) * len);
	if (str == NULL || dup_str == NULL)
		return (NULL);
	len++;
	while (len > 0)
	{
		*(dup_str + len - 1) = *(str + len - 1);
		len--;
	}
	return (dup_str);
}
