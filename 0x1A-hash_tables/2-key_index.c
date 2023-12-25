#include "main.h"

#include <stdlib.h>


/**
 * key_index - generates an index form a key (char *)
 * @key: A CONSTANT string.
 * @size: upperlimit of index, array size.
 *
 * Return: a peculiar index below @size of every @key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int temp;

	temp = hash_djb2(key);

	return (temp % size);
}
