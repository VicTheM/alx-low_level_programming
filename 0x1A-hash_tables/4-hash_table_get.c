#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - retrieves a value using @key
 * @ht: the table to pick val from
 * @key: key
 *
 * Return: pointer to value, otherwise NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (key == NULL || strlen(key) < 1)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];
	if (node == NULL)
		return (NULL);

	if (node->next == NULL)
	{
		if (strcmp(key, node->key) == 0)
			return (node->value);
		return (NULL);
	}

	/* Resolve Collisions */
	while (node->next != NULL)
	{
		if (strcmp(key, node->key) == 0)
			return (node->value);
		node = node->next;
	}

	if (strcmp(key, node->key) == 0)
		return (node->value);
	return (NULL);
}
