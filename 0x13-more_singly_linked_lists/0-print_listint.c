#include "lists.h"

/* stdlib & stdio snipped off because of betty */
/**
 * print_listint - prints a listy element innt
 * @h: head pointer
 *
 * Return: number of nodes in list
 */
size_t print_listint(const listint_t *h)
{
	size_t n_nodes;
	const listint_t *nex;

	n_nodes = 0;
	if (!h)
		return (0);
	nex = h;
	while (nex)
	{
		n_nodes++;
		printf("%d\n", nex->n);
		nex = nex->next;
	}
	return (n_nodes);
}
