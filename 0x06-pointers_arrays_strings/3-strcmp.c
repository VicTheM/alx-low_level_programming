#include "main.h"

/**
 * _strcmp - compares two stsrings
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: signed int
 *
 */

int _strcmp(char *s1, char *s2)
{
	if (*s1 > *s2 || *s2 > *s1)
		return (*s1 - *s2);
	else
		return (0);
}
