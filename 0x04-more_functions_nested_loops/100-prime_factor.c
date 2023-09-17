#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 *
 */
int main(void)
{
	unsigned long number = 612852475143;
	unsigned int max_pf;
	int flag;
	unsigned long ii;
	unsigned int jj;

	/* get factors */
	for (ii = (number/2); ii > 0; --ii)
	{
		if (number % ii == 0)
		{
			flag = 1;
			for (jj = 2; jj < ii / 2; jj++)
			{
				if (ii % jj == 0) /* not prime */
				{
					flag = 0;
					break;
				}
			}
			if (flag == 1)
			{
				max_pf = ii;
				printf("%u\n", max_pf);
				return (0);
			}
		}
	}
	return (0);
}

