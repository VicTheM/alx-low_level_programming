#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    hash_node_t *node;
    int i;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "1"); 
    hash_table_set(ht, "hetairas", "1");
    hash_table_set(ht, "betty", "2");
    hash_table_set(ht, "mentioner", "2");
    hash_table_set(ht, "dram", "1");
    hash_table_set(ht, "vivency", "2");
    hash_table_set(ht, "betty", "3");
    
    
    
    
    
    
    for (i = 0; i < 1024; i++)
    {
	    node = ht->array[i];
	    if (node == NULL)
		    continue;
	    if (node->next != NULL)
	    {
		    printf("******************************COLLISSION!!!************************************\n");
		    printf("**************index: %u\tkey: %s\tValue: %s\n", i, node->key, node->value);
		    while (node->next != NULL)
		    {
			    node = node->next;
			    printf("***************index: %u\tkey: %s\tValue: %s\n", i, node->key, node->value);
		    }
	    }
	    else
	    {
		    printf("index: %u\tkey: %s\tValue: %s\n", i, node->key, node->value);
	    }
    }
    return (EXIT_SUCCESS);
}
