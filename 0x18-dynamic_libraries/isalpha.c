#include "main.h"

/**
 * _isalpha - Checks if input is a letter
 * @c: ASCII of any character
 *
 * Return: if lowercase alphabet, 1, else 0.
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

