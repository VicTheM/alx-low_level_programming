#include "main.h"

/**
 * print_triangle - checks if a character is upper
 * @size: height of triangle
 * Description: prints using a UDF
 *
 * Return: Always 1 (true) 0 (false)
 */
void print_triangle(int size)
{
	int counter;
	int space;
	int harsh;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (counter = 1; counter < (size + 1); counter++)
		{
			for (space = (size - counter); space > 0; --space)
			{
				_putchar(' ');
			}
			for (harsh = counter; harsh > 0; --harsh)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
