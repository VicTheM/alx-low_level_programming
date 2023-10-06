#include <stdio.h>
/**
 * main - prints all command line arguments
 * @argc: numbwr of command line arguments
 * @argv: array of pointers to strings
 *
 * Return: 0 Success
 */
int main(int argc, char *argv[])
{
	int ii;

	for (ii = 0; ii < argc; ii++)
	{
		printf("%s\n", argv[ii]);
	}
	return (0);
}
