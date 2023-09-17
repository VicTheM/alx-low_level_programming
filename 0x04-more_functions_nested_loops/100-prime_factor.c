#include <stdio.h>

/**
 * main - Prints the largest prime factor of the number 612852475143.
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int num = 612852475143;
	int CurrMaxPrime = 0;
	unsigned long int i = 3;

	if (num % 2 == 0)
	{
		CurrMaxPrime = 2;
		while (num % 2 == 0)
		{
			num = num / 2;
		}
	}
	while (i <= num * 0.5)
	{
		while (num % i == 0)
		{
			CurrMaxPrime = i;
			num = num / i;
		}
		i += 2;
	}

	if (num > 2)
		CurrMaxPrime = num;

	printf("%d\n", CurrMaxPrime);
	return (0);
}
