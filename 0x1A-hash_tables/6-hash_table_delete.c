#include "main.h"


/**
 * hash_table_delete - cleans up a hash table, frees memory
 * @ht: pointer to table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int c;
	hash_node_t *node, *temp;

	for (c = 0; c < ht->size; c++)
	{
		temp = ht->array[c];
		if (temp == NULL)
			continue;
		do
		{
			node = temp;
			free(node->value);
			free(node->key);
			temp = node->next;
			free(node);
		} while (temp != NULL);
	}

	free(ht->array);
	free(ht);
}
