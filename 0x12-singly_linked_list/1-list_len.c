#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * list_len - finds the number of nodes in a list
 * @h: pointer to head (the starting node)
 *
 * Return: number of nodes in list
 */
size_t list_len(const list_t *h)
{
	const list_t *header = h;
	size_t nodes;
	short flag = 0;

	if (h != NULL)
		flag = 1;
	nodes = 0;
	while (flag)
	{
		if (header->next == NULL)
			flag = 0;
		nodes++;
		header = header->next;
	}
	return (nodes);
}
