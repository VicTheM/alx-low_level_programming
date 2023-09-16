#include "main.h"

/**
 * print_most_numbers - checks if a character is upper
 * Description: prints using a UDF
 *
 * Return: Always 1 (true) 0 (false)
 */
void print_most_numbers(void)
{
	char *char_pointer = "01356789\n";
	
	while (*char_pointer)
	{
		_putchar(*char_pointer);
		++char_pointer;
	}
}
