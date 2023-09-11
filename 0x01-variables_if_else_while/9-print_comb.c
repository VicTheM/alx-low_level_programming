#include <stdio.h>

/**
 * main - entry point
 * Description: prints out lowercase characters
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int counter_1 = 48;

	while (counter_1 < 58)
	{
		putchar(counter_1++);
		if (counter_1 != 58)
		{
			putchar(44); /*comma*/
			putchar(32); /*space*/
		}
	}
	putchar(10);

	return (0);
}
