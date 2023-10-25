#include "lists.h"

/**
 * print_listint_safe - prints a listy element innt
 * @head: head pointer
 *
 * Return: number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	unsigned int c, i;
	size_t n_nodes;
	const listint_t *nex;
	const listint_t **loop = malloc(sizeof(listint_t *) * 50);

	c = 0;
	if (loop == NULL)
		exit(98);
	n_nodes = 0;
	if (!head)
		return (0);

	loop[c] = NULL;
	c++;
	nex = head;
	while (nex)
	{
		for (i = 1; i < c; i++) /* cmp memory locations */
		{
			if (nex == loop[i])
			{
				printf("-> [%p] %d\n", (void *)nex, nex->n);
				return (n_nodes);
			}
		}
		n_nodes++;
		printf("[%p] %d\n", (void *)nex, nex->n);
		loop[c] = nex;
		c++;
		nex = nex->next;
	}

	free(loop);
	return (n_nodes);
}
