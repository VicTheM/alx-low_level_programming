#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: prints using a UDF
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int max_print = 10;
	char *char_pointer = "abcdefghijklmnopqrstuvwxyz\n";

	while (max_print > 0)
	{
		while (*char_pointer)
		{
			_putchar(*char_pointer);
			++char_pointer;
		}
		--max_print;
	}
}
