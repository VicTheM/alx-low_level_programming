#include "main.h"

/**
 * main - Entry point
 * Description: prints using a UDF
 *
 * return: Always 0 (Success)
 */
int main(void)
{
	char *char_pointer = "_putchar\n";

	while (*char_pointer)
	{
		_putchar(*char_pointer);
		++char_pointer;
	}
	return (0);
}
