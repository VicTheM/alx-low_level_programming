#include "main.h"

/* THIS FUNCTION SWAPS THE VALUE OF TWO INTEGERS */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
