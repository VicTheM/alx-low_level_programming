#include "main.h"
/**
 * _strlen_recursion - gets the length of a str
 * @s: pointer to string
 *
 * Return: length of str as int
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
