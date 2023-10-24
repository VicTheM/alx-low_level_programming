#include "main.h"
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_number - Prints an integer.
 * @n: The integer
 *
 */

void print_number(int n)
{
	int d = n;
	int p = 0;
	int m = 1;

	if (d < 0)
	{
		putchar('-');
		d *= -1;
	}

	if (d == 0)
		putchar('0');

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

			putchar((d / t) % 10 + '0');
			p--;
		}
}

int main(int argc, char *argv[])
{
	int num = 0;
	int c = 0;
	for (c = 1; c < argc; c++)
	{
		num = atoi(argv[c - 1]);
		print_number(num);
		printf("\n");
	}
	return (0);
}
