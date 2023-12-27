#include "main.h"
#include <stdio.h>

/**
 * hash_table_print - prints in dicttionary format
 * @ht: pointer to hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int c;
	short int first = 1;
/*	short int last = 0; */

	if (ht == NULL)
		return;

	printf("{");
	for (c = 0; c < ht->size; c++)
	{
		node = ht->array[c];
		if (node == NULL)
			continue;

		if (first == 0 && node)
		{
			printf(", ");
		}

		if (first == 1)
		{
			first = 0;
		}

		do {
			printf("'%s': '%s'", node->key, node->value);

			node = node->next;
			if (node != NULL)
				printf(", ");

		} while (node != NULL);
	}
	printf("}");
	putchar('\n');
}
