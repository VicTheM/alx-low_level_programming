#include "main.h"

/**
 * more_numbers - checks if a character is upper
 * Description: prints using a UDF
 *
 * Return: Always 1 (true) 0 (false)
 */
void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
			{
				_putchar((y / 10) + '0');
			}

			_putchar((y % 10) + '0');
		}

		_putchar('\n');
	}
}
