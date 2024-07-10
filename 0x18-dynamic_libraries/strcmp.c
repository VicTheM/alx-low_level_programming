#include "main.h"

/**
  *  _strcmp - Compares two strings
  * @s1: pointer to first string
  * @s2: pointer to second string
  *
  * Return: an integer.
  */
int _strcmp(char *s1, char *s2)
{
	int s1_len = _strlen(s1);
	int s2_len = _strlen(s2);
	int i = 0, c1, c2;

	while (*(s1 + i) == *(s2 + i) && i <= s1_len && i <= s2_len)
	{
		i++;
	}
	c1 = *(s1 + i);
	c2 = *(s2 + i);
	if (i == s1_len)
		c1 = 0;
	if (i == s2_len)
		c2 = 0;
	return (c1 - c2);
}
