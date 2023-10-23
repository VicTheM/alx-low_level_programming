#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_list - print all data in a linked list
 * @h: pointer to head (the starting node)
 *
 * Return: number of nodes in list
 */
size_t print_list(const list_t *h)
{
	const list_t *header = h;
	size_t nodes;
	int flag = 1;

	nodes = 0;
	if (h == NULL)
		return (0);
	while (flag)
	{
		if (header->next == NULL)
			flag = 0;
		nodes++;
		if (header->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", header->len, header->str);

		header = header->next;
	}
	return (nodes);
}
