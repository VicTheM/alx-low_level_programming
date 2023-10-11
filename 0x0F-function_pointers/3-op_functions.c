#include "3-calc.h"

int op_add(int a, int b)
{
	return (a + b);
}

int op_sub(int a, int b)
{
	if (a > b)
		return (a - b);
	return (b - a);
}

int op_mul(int a, int b)
{
	return (a * b);
}

int op_div(int a, int b)
{
	return (a / b);
}

int op_mod(int a, int b)
{
	return (a % b);
}
