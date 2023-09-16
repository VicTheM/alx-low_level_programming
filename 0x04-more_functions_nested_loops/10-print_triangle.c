#include "main.h"

/**
 * print_triangle - checks if a character is upper
 * Description: prints using a UDF
 *
 * return: Always 1 (true) 0 (false)
 */
void print_triangle(int size)
{
	int counter;
	int jj;
	int ii;

	ii = 0

	if ( size <= 0 )
		_putchar('\n');
	else
	{
		for (counter = 1; counter < (size + 1); counter++)
		{
			for (jj = (size - counter); jj > 0; --jj)
			{
				_putchar(' ');
			}
			while (ii < counter);
			{
				_putchar('#');
				ii++
			}
			_putchar('\n')
		}
	}
}
