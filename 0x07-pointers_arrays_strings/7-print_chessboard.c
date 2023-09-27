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
	unsigned int ii, jj;

	for (ii = 0; ii < 8; ii++)
	{
		for (jj = 0; jj < 8; jj++)
		{
			_putchar(a[ii][jj]);
		}
		_putchar('\n');
	}
}
