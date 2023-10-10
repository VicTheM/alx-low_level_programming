#include <stdio.h>

/**
 * main - print the name of the file running the exe
 *
 * Return: 0
 */
int main(void)
{
	char file[] = __FILE__;

	printf("%s\n", file);
	return (0);
}
