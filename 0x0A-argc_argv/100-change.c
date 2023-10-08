#include <stdio.h>
#include <stdlib.h>
/**
 * num_coin - a recursive func that finds the min num of coin
 * @cent: an int > 0 holdiing the total change
 * @index: at first call, index should be 0
 *
 * Return: the min num of coin as int
 */
int num_coin(int cent, int index)
{
	int change[] = {25, 10, 5, 2, 1};
	int rem;

	rem = cent % change[index];
	if (rem == 0)
		return (cent / change[index]);
	if (rem == cent)
		return (num_coin(cent, index + 1));
	return ((cent / change[index]) + num_coin((cent % change[index]), index));
}

/**
 * main - solves min coin prob
 * @argc: num of command line argument
 * @argv: array of pointers to command line arguments
 *
 * Return: 0 success, 1 failure
 */
int main(int argc, char *argv[])
{
	int cent;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);

	if (cent <= 0)
	{
		printf("0\n");
		return (0);
	}
	printf("%d\n", num_coin(cent, 0));
	return (0);
}
