#include "main.h"

/**
 * get_endianness - Checks the endianness (to be explained)
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int i = 1;
	char *x = (char *)&i;

	return (*x == 1);
}
