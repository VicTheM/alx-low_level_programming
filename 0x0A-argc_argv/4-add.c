#include <stdio.h>
#include <stdlib.h>
/**
 * main - add positive command line arguments
 * @argc: number of command line arguments
 * @argv: array of pointers to command line arguments
 *
 * Return: 0 Success, 1 Failure
 */
int main(int argc, char *argv[])
{
	unsigned int sum;
	int c, j;

	sum = 0;
	for (c = 1; c < argc; c++)
	{
		j = 0;
		while (argv[c][j] != '\0')
		{
			if (argv[c][j] < 48 || argv[c][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[c]);
	}
	printf("%u\n", sum);
	return (0);
}
