#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	long double first = 1;
	long double second = 2;
	long double nth;
	int counter;

	printf("%0.0f, %0.0f, ", first, second);

	for (counter = 2; counter < 98; counter++)
	{
		nth = first + second;

		if (counter == 97)
			printf("%0.0f", nth);
		else
		{
			printf("%0.0f, ", nth);
			first = second;
			second = nth;
		}
	}
	printf("\n");

	return (0);
}

