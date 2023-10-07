#include "main.h"

/**
 * _islower - Checks if input is a lowercase alphabet
 * @c: ASCII of any character
 *
 * Return: if lowercase alphabet, 1, else 0.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

