#include "main.h"

/**
 * _isdigit - Checks for a digit, 0 to 9.
 * @c: ASCII of the character
 *
 * Return: for uppercase character 1, else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
