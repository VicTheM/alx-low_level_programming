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
 * puts_half - Prints half of a string
 * @str: Pointer to a string
 */
void puts_half(char *str)
{
	int len = _strlen(str), n, l;

	if (len % 2)
		n = (len - 1) / 2;
	else
		n = len / 2;

	l = len - n;
	while (l < len)
	{
		_putchar(*(str + l));
		l++;
	}
	_putchar('\n');
}

