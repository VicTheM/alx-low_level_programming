#include "main.h"
#include <string.h>

/**
 * hash_node_create - creates a hash node item;
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
hash_node_t *hash_node_create(hash_node_t *head, const char *key, const char *value)
{
	hash_node_t *hn;

	if (key == NULL || strlen(key) < 1)
		return (NULL);

	hn = malloc(sizeof(hash_node_t));
	if (hn == NULL)
		return (NULL);

	hn->key = strdup(key); /* Does strdup() fail? */
	hn->value = strdup(value); /*Two unfreed mem created */
	
	if (head == NULL)
	{
		hn->next = NULL;
		return (hn);
	}
	hn->next = head;
	
	return (hn);
}


/**
 * hash_table_set - puts a node in the hash_table bucket
 * @ht: the hash-table
 * @key: lookup/access key
 * @value: the data
 *
 * Return; 1 Success, 0 Failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hn;
	unsigned long int index;

	if (key == NULL || strlen(key) < 1 || value == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	hn = hash_node_create(ht->array[index], key, value);
	if (hn == NULL)
		return (0);
	ht->array[index] = hn;
	return (1);
}



