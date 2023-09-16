#include <stdio.h>

/**
 * main - Entry point
 *
 * return: Always 0 (Success)
 *
 */

int main(void)
{
	int max_print;
	int three_acc;
	int five_acc;
	int counter;

	max_print = 101;
	three_acc = 3;
	five_acc = 5;

	for (counter = 1; counter < max_print; counter++)
	{
		if (counter == 100)
			printf("Buzz");
		else if ((counter % 3 == 0) && (counter % 5 == 0))
		{
			printf("FizzBuzz ");
			three_acc = three_acc + 3;
			five_acc = five_acc + 5;
		}
		else if (counter % 3 == 0)
		{
			printf("Fizz ");
			three_acc = three_acc + 3;
		}
		else if (counter % 5 == 0)
		{
			printf("Buzz ");
			five_acc = five_acc + 5;
		}
		else
			printf("%d ", counter);
	}
	printf("\n");

	return (0);
}

