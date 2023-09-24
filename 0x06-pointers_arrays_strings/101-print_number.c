#include "main.h"
/**
 * get_pow - returns the exponent contained in an integer
 * @n: integer to be tested;
 *
 * Return: power as int
 *
int get_pow(unsigned int n)
{
	int pow;
	unsigned int divisor;

	pow = 0;
	divisor = 10;
	while (n / divisor != 0)
	{
		pow++;
		divisor *= 10;
	}
	return (pow);
}

 * _pow - raise a number to a power
 * @x: index
 * @y: power
 *
 * Return: x raised to y as int
 *
unsigned int _pow(int x, int y)
{
	unsigned int power = 1;

	while (y != 0)
	{
		power *= x;
		--y;
	}
	return (power);
}
 * print_number - Prints an integer.
 * @n: Integer
 *
 * Return: void
void print_number(int n)
{
	unsigned int number;
	int power;
	unsigned int buffer;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	number = n;
	if (number <= 9)
	{
		_putchar(number + '0');
	}
	else
	{
		power = get_pow(number);
		while (power != 0)
		{
			buffer = number / _pow(10, power);
			_putchar(buffer + '0');
			number -= (buffer * _pow(10, power));
			--power;
		}
		_putchar(number + '0');
	}
}

 * print_number - Prints an integer.
 * @n: Integer
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	x = n;

	if (x / 10)
		print_number(x / 10);

	_putchar(x % 10 + '0');
}
