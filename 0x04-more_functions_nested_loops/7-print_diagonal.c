#include "main.h"

/**
 * print_diagonal - checks if a character is upper
 * @n: number of slash used to print diagonal
 * Description: prints using a UDF
 *
 * Return: Always 1 (true) 0 (false)
 */
void print_diagonal(int n)
{
	int counter;
	int counter_2;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (counter = 0; counter < n; counter++)
		{
			for (counter_2 = 0; counter_2 < counter; counter_2++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
