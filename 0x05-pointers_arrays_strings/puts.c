#include "main.h"

/* Prints a string to stdout */

void _puts(char *str)
{

	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

