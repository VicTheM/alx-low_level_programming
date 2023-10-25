#include "lists.h"
#ifndef _D_
#define _D_

/**
 * dddd - descending
 * @nex: list pointer
 *
 * Return: nodes;
 */
size_t dddd(listint_t *nex)
{
	int n_nodes = 0;
	listint_t *loop = nex;
	listint_t *temp = nex;

	while (nex)
	{
		if (temp < nex) /* cmp memory locations */
		{
			return (n_nodes);
		}
		n_nodes++;
		loop = nex->next;
		temp = nex;
		free(nex);
		nex = loop;
	}
	return (n_nodes);
}

/**
 * aaaa - ascending
 * @nex: list pointer
 *
 * Return: nodes
 */
size_t aaaa(listint_t *nex)
{
	int n_nodes = 0;
	listint_t *loop = nex;
	listint_t *temp = nex;

	while (nex)
	{
		if (temp > nex) /* cmp memory locations */
		{
			return (n_nodes);
		}
		n_nodes++;
		loop = (nex)->next;
		temp = nex;
		free(nex);
		nex = loop;
	}
	return (n_nodes);
}

#endif /* _D_ */

/**
 * free_listint_safe - prints a listy element innt
 * @h: head pointer
 *
 * Return: number of nodes in list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t n_nodes;
	listint_t *nex;
	listint_t *loop;
	char order = 'z';

	n_nodes = 0;
	if (!*h)
		return (0);
	nex = loop = *h;
	if (nex->next != NULL && nex->next < nex)
		order = 'd';
	else if (nex->next != NULL && nex->next > nex)
		order = 'a';
	else if (nex->next != NULL && nex->next == nex)
		order = 's';

	switch (order)
	{
		case 'a':
			n_nodes = aaaa(nex);
			break;
		case 'd':
			n_nodes = dddd(nex);
			break;
		case 's':
			n_nodes = 1;
			free(*h);
			*h = NULL;
			break;
		default:
			while (nex)
			{
				n_nodes++;
				loop = nex->next;
				free(nex);
				nex = loop;
			}
	}
	*h = NULL;
	return (n_nodes);
}


