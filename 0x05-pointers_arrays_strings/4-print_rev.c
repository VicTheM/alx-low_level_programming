#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to the string
 * Return: Length of string
 */
int _strlen(char *s)
{
	char *n = s;
	int len = 0;

	while (*n)
	{
		len++;
		n++;
	}

	return (len);
}

/**
 * print_rev - Prints a string, in reverse.
 * @s: pionter to the string.
 */
void print_rev(char *s)
{
	int len = _strlen(s);

	while (len)
	{
		_putchar(*(s + len - 1));
		len--;
	}
	_putchar('\n');

}
