#include "main.h"

/**
 * _isdigit - checks if a character is upper
 * @c: input character
 * Description: prints using a UDF
 *
 * Return: Always 1 (true) 0 (false)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
