#include "main.h"

/**
 * print_numbers - checks if a character is upper
 * Description: prints using a UDF
 *
 * Return: Always 1 (true) 0 (false)
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
		_putchar(i);
	_putchar('\n');
}
