#include "main.h"

void print_rev(char *s)
{
	char *rev;
	int ii = 0;

	while (*s)
	{
		*rev = *s;
		s++;
		ii++;
	}
	do
	{
		_putchar(*rev);
		ii--;
	}while (ii >= 0);

	_putchar('\n');
}
