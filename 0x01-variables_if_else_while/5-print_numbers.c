#include <stdio.h>
/**
 * main - entry point
 * Parameters: void
 *
 * Description: prints out lowercase characters
 * Return: always 0 (success)
 */
int main(void)
{
	int counter = 0;

	while (counter < 10)
		printf("%d", counter++);
	putchar(10);
	return (0);
}
