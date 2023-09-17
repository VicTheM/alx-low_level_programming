#include "main.h"

/**
 * print_square - checks if a character is upper
 * @size: breadth of square
 * Description: prints using a UDF
 *
 * Return: Always 1 (true) 0 (false)
 */
void print_square(int size)
{
	int counter;
	int counter_2;

	if ( size <= 0 )
		_putchar('\n');
	else
	{
		for (counter = 0; counter < size; counter++)
		{
			for (counter_2 = 0; counter_2 < size; counter_2++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
