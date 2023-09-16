#include "main.h"

/**
 * print_numbers - checks if a character is upper
 * Description: prints using a UDF
 *
 * return: Always 1 (true) 0 (false)
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; 1++)
		_putchar(i);
	_putchar('\n');
}
