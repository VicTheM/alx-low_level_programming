#include "main.h"
#include <math.h>

/**
 * print_number - Prints an integer.
 * @n: The integer
 *
 */

void print_number(int n)
{
	int d = n, p = 0, m = 1;

	if (d < 0)
	{
		_putchar('-');
		d *= -1;
	}
	
	if (d == 0)
		_putchar('0');

	while (1)
	{
		if (d / m != 0)
		{
			m *= 10;
			p++;
		}
		else
		{
			break;
		}
	}
		while (p > 0)
		{
			unsigned int t = 1;
			int i = 1;

			while (i <  p)
			{
				i++;
				t *= 10;
			}	

			_putchar((d / t) % 10 + '0');
			p--;
		}
}
