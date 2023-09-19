#include "main.h"

/**
 * swap_int - Swaps two integers.
 * @a: The pointer to the first integer.
 * @b: The pointer to the second integer.
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
