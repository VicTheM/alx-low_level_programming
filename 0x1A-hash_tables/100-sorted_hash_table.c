#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * find_place - Transverses sorted ht and places hn properly
 * @ht: hash_table to place
 * @hn: node to place node in
 */
void find_place(shash_table_t *ht, shash_node_t *hn)
{
	shash_node_t *temp, *store;
	int data;

	if (ht->shead == NULL)
	{
		ht->shead = hn;
		ht->stail = hn;
	}
	else
	{
		temp = ht->shead;
		do {
			store = temp;
			data = strcmp(hn->key, temp->key);
			if (data <= 0)
				break;
			temp = temp->snext;
		} while (temp != NULL);

		if (temp == NULL)
		{
			store->snext = hn; /* SegFault?? */
			hn->sprev = store;
			ht->stail = hn;
		}
		else
		{
			hn->snext = store;
			hn->sprev = store->sprev;
			if (store->sprev == NULL)
				ht->shead = hn;
			else
				hn->sprev->snext = hn;
			store->sprev = hn;
		}
	}
}


/**
 * shash_table_create - creates an instance of a shash table
 * @size: Bucket size, array len
 *
 * Return: pointer to the malloced memory for table structure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	unsigned long int i;

	if (size < 1)
		return (NULL);
	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(shash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}

	table->shead = NULL;
	table->stail = NULL;

	return (table);
}


/**
 * shash_node_create - creates a hash node item;
 * @head: incase of collision
 *	we used seperate chaining to handle collision
 *	for collision @head = current item in bucket
 *	A linked list is created with new node == head
 *	for non-collision @head = NULL;
 * @key: key
 * @value: value
 *
 * Return: pointer to the created node
 */
shash_node_t *shash_node_create(shash_node_t *head,
		const char *key, const char *value)
{
	shash_node_t *hn;

	if (key == NULL || strlen(key) < 1)
		return (NULL);

	hn = malloc(sizeof(shash_node_t));
	if (hn == NULL)
		return (NULL);

	hn->key = strdup(key); /* Does strdup() fail? */
	hn->value = strdup(value); /*Two unfreed mem created */

	if (head == NULL)
	{
		hn->next = NULL;
		hn->sprev = NULL;
		hn->snext = NULL;
		return (hn);
	}
	hn->next = head;
	hn->sprev = NULL;
	hn->snext = NULL;

	return (hn);
}


/**
 * shash_table_set - puts a node in the hash_table bucket
 * @ht: the hash-table
 * @key: lookup/access key
 * @value: the data
 *
 * Return: 1 Success, 0 Failure
 */
int shash_table_set(shash_table_t *ht,
	       const char *key, const char *value)
{
	shash_node_t *hn, *temp, *store;
	unsigned long int index;
	short int boolean = 1;

	if (key == NULL || ht == NULL || strlen(key) < 1 || value == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	/* check and replace duplicate keys */
	if (ht->array[index] != NULL)
	{
		temp = ht->array[index];
		do {
			store = temp;
			boolean = strcmp(key, temp->key);
			temp = temp->next;
		} while (temp != NULL && boolean != 0);

		if (boolean == 0)
		{
			strcpy(store->value, value);
			return (0);
		}
	}

	hn = shash_node_create(ht->array[index], key, value);
	if (hn == NULL)
		return (0);
	ht->array[index] = hn;
	find_place(ht, hn);

	return (1);
}




/**
 * shash_table_get - retrieves a value using @key
 * @ht: the table to pick val from
 * @key: key
 *
 * Return: pointer to value, otherwise NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
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





/**
 * shash_table_print - prints in dicttionary format
 * @ht: pointer to hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;
	short int first = 1;

	if (ht == NULL)
		return;

	printf("{");
	node = ht->shead;
	do {
		if (node == NULL)
			break;
		if (first == 0 && node)
		{
			printf(", ");
		}

		if (first == 1)
		{
			first = 0;
		}
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;

	} while (node != NULL);

	printf("}");
	putchar('\n');
}




/**
 * shash_table_print_rev - prints in reverse order
 * @ht: pointer to hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;
	short int first = 1;

	if (ht == NULL)
		return;

	printf("{");
	node = ht->stail;
	do {
		if (node == NULL)
			break;
		if (first == 0 && node)
		{
			printf(", ");
		}

		if (first == 1)
		{
			first = 0;
		}
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;

	} while (node != NULL);

	printf("}");
	putchar('\n');
}





/**
 * shash_table_delete - cleans up a hash table, frees memory
 * @ht: pointer to table
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int c;
	shash_node_t *node, *temp;

	for (c = 0; c < ht->size; c++)
	{
		temp = ht->array[c];
		if (temp == NULL)
			continue;
		do {
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
