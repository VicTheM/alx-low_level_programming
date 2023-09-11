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
	int counter = 97;

	while (counter < 123)
		putchar(counter++);
	putchar(10);

	return (0);
}
