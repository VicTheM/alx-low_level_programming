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
 * puts2 - Prints every other character of a string,
 * starting with the first character.
 * @str: Pointer of the string.
 */
void puts2(char *str)
{
	int len = _strlen(str), i = 0;

	while (len)
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
		i++;
		len--;
	}
	_putchar('\n');
}
