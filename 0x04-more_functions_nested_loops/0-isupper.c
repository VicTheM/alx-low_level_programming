#include "main.h"

/**
 * _isupper - checks if a character is upper
 * Description: prints using a UDF
 *
 * return: Always 1 (true) 0 (false)
 */
int _isupper(int c)
{
	if ( c >= 65 && c <= 90 )
		return (1);
	else
		return (0);
}
