#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	unsigned long first = 1;
	unsigned long second = 2;
	unsigned long nth;
	int counter;

	printf("%lu, %lu, ", first, second);

	for (counter = 3; counter < 98; counter++)
	{
		nth = first + second;

		if (counter == 97)
			printf("%lu", nth);
		else
		{
			printf("%lu, ", nth);
			first = second;
			second = nth;
		}
	}
	printf("\n");

	return (0);
}

