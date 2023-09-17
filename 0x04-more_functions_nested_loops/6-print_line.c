#include "main.h"

/**
 * print_line - prints a line of length n
 * @n: number of dashes used to print line
 * Description: prints using a UDF
 *
 * Return: Always 1 (true) 0 (false)
 */
void print_line(int n)
{
	int counter;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (counter = 0; counter < n; counter++)
			_putchar('_');
		_putchar('\n');
	}
}
