#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: prints using a UDF
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char *char_pointer = "abcdefghijklmnopqrstuvwxyz\n";

	while (*char_pointer)
	{
		_putchar(*char_pointer);
		++char_pointer;
	}
	return (0);
}
