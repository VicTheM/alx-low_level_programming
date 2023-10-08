#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiplies two command line args
 * @argc: expected to always be 3
 * @argv: pointer to array holding the numbrs
 *
 * Return: 1 on error, otherwise 0
 */
int main(int argc, char *argv[])
{
	int a, b, y;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	y = a * b;

	printf("%d\n", y);
	return (0);
}
