#include "main.h"

/**
 * _idigitr() - checks if a character is upper
 * Description: prints using a UDF
 *
 * return: Always 1 (true) 0 (false)
 */
int _isdigit(int c)
{
	if ( c >= 48 && c <= 57 )
		return (1);
	else
		return (0);
}
