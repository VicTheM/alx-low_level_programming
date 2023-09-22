#include "main.h"


/**
 * print_number - Prints an integer.
 * @n: Integer
 */
void print_number(int n)
{
	int num = n, pow = 0, m = 10;
	int digit = 0;

	if (num < 0)
	{
		num *= -1;
		_putchar("-");
	}
	while (num / m != 0)
	{
		pow++;
		m *= 10;
	}

	m = 1;
	while (pow >= 0)
	{
		int i = 0;

		num = num - digit * m;
		m = 1;
		while (i < pow)
		{
			m *= 10;
			i++;
		}
		digit = num / m;
		_putchar(digit + '0');
		pow--;
	}
}
