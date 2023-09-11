#include <stdio.h>

/**
 * main - entry point
 * Description: prints out lowercase characters
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int counter_1 = 97;
	int counter_2 = 65;

	while (counter_1 < 123)
		putchar(counter_1++);
	while (counter_2 < 91)
		putchar(counter_2++);
	putchar(10);

	return (0);
}
