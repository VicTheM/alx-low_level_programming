#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concantenates two strings
 * @s1: string to occupy the MSB in new memory
 * @s2: string to occupy the LSB in new memory
 *
 * Return: pointer to new string else NULL
 */
char *str_concat(char *s1, char *s2)
{
	int len_1 = 0;
	int len_2 = 0;
	char *new_str;
	int counter;

	if (s1 == NULL)
		len_1 = 0;
	if (s2 == NULL)
		len_2 = 0;

	while (*(s1 + len_1))
		len_1++;
	while (*(s2 + len_2))
		len_2++;

	new_str = (char *)malloc(sizeof(char) * (len_1 + len_2 + 1));
	if (new_str == NULL)
		return (NULL);
	else
	{
		for (counter = 0; counter < len_1; counter++)
			new_str[counter] = s1[counter];
		counter = 0;
		for (counter = 0; counter < len_2; counter++)
			new_str[len_1 + counter] = s2[counter];
		new_str[len_1 + len_2] = '\0';
	}
	return (new_str);
}
