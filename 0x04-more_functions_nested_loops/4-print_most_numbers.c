#include "main.h"

/**
 * print_most_numbers - checks if a character is upper
 * Description: prints using a UDF
 *
 * Return: Always 1 (true) 0 (false)
 */
void print_most_numbers(void)
{
<<<<<<< HEAD
	char *char_pointer = "01356789\n";
=======
	char *char_pointer;

	*char_pointer = "01356789\n";
>>>>>>> 1bc95a3bf83e183de62fbc2cd2e56fc3e60a2e23
	
	while (*char_pointer)
	{
		_putchar(*char_pointer);
		++char_pointer;
	}
}
