#include "main.h"
/**
 * _pow_recursion - find the power of an index
 * @x: index
 * @y: power
 *
 * Return: x raised to power y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (-1);
}
