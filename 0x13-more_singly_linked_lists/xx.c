#include "lists.h"


size_t d(const listint_t *nex)
{
	int n_nodes = 0;
	const  listint_t *loop = nex;

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

size_t a(const listint_t *nex)
{
	int n_nodes = 0;
	const listint_t *loop = nex;

	while (nex)
	{
		if (loop > nex) /* cmp memory locations */
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
	char order = 'z';

	n_nodes = 0;
	if (!head)
		return (0);
	nex = loop = head;
	if (nex->next != NULL && nex->next < nex)
		order = 'd';
	else if (nex->next != NULL && nex->next > nex)
		order = 'a';
	else if (nex->next != NULL && nex->next == nex)
		order = 's';

	switch (order)
	{
		case 'a':
			n_nodes = a(nex);
			break;
		case 'd':
			n_nodes = d(nex);
			break;
		case 's':
			n_nodes = 1;
			printf("[%p] %d\n", (void *)nex, nex->n);
			break;
		default:
			while (nex)
			{
				n_nodes++;
				printf("[%p] %d\n", (void *)nex, nex->n);
				nex = nex->next;
			}
	}
	return (n_nodes);
}


