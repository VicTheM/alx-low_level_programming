#include "main.h"

/**
 * print_chessboard - prints an 8 X 8 matrix
 * @a: pointer to array of 8 characters
 *
 * Return: void
 *
 */
void print_chessboard(char (*a)[8])
{
	int ii;

	while (**a != '\0')
	{
		char *aa = *a;

		for (ii = 0; ii < 8; ii++)
		{
			_putchar(*(aa + ii));
		}
		_putchar('\n');
		a++;
	}
}
