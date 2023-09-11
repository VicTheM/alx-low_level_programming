#include <stdio.h>
/**
 * Main - entry point
 * Parameters: void
 *
 * Description: prints out lowercase characters
 * Return: always 0 (success)
 */
int main(void)
{
	int counter = 97;

	while (counter < 123)
	{
		if (counter == 113 || counter == 101)
		{
			++counter;
			continue;
		}
		putchar(counter++);
	}

	putchar(10);

	return (0);
}
