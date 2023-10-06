#include <stdio.h>
/**
 * main - prints out the name of the executable
 * @argc: numbwr of command line arguments
 * @argv: array of pointers to strings
 *
 * Return: 0 Success
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
