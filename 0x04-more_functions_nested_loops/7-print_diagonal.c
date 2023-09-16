#include "main.h"

/**
 * print_diagonal - checks if a character is upper
 * Description: prints using a UDF
 *
 * return: Always 1 (true) 0 (false)
 */
void print_diagonal(int n)
{
	int counter;

	if ( n <= 0 )
		_putchar('\n');
	else
	{
		for (counter = 0; counter < n; counter++)
		{
			_putchar('\\');
			_putchar('\n');
		}
	}
}
