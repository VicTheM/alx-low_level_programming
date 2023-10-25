#include "lists.h"

/**
 * print_listint_safe - prints a listy element innt
 * @head: head pointer
 *
 * Return: number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n_nodes;
	const listint_t *nex;
	const listint_t *loop;

	n_nodes = 0;
	if (!head)
		return (0);
	nex = loop = head;
	while (nex)
	{
		if (loop < nex) /* cmp memory locations */
		{
			printf("-> [%p] %d\n", (void *)nex, nex->n);
			return (n_nodes);
		}
		n_nodes++;
		printf("[%p] %d\n", (void *)nex, nex->n);
		loop = nex;
		nex = nex->next;
	}

	return (n_nodes);
}
