#include "main.h"

/**
 * _puts - Prints a string, followed by a new line, to stdout.
 * @str: Pointer of a string
 */
void _puts(char *str)
{
	char *s = str;

	while (*s)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
