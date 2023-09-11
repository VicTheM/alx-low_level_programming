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
	int counter_0 = 48;

	while (counter_0 < 58)
		putchar(counter_0++);
	while (counter_1 < 103)
		putchar(counter_1++);
	putchar(10);

	return (0);
}
