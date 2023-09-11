#include <stdio.h>

/**
 * main - entry point
 * Description: prints out lowercase characters
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int counter_1 = 122;

	while (counter_1 > 96)
		putchar(counter_1--);
	putchar(10);

	return (0);
}
