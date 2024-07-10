#include "main.h"

/**
 * _isupper - Checks for uppercase character.
 * @c: ASCII of the character
 *
 * Return: for uppercase character 1, else 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
