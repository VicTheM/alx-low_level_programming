#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: prints using a UDF
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int max_print;
	char *char_pointer = "abcdefghijklmnopqrstuvwxyz\n";

	for (max_print = 0; max_print < 10; max_print++)
	{
		while (*char_pointer)
		{
			_putchar(*char_pointer);
			++char_pointer;
		}
		char_pointer -= 27;
	}
}
