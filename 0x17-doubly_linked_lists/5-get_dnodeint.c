#include "lists.h"

/**
 * get_dnodeint_at_index - Adds a new node at the end of a dlistint_t list.
 * @head: Head of the doubly linked list
 * @index:  Node index
 * Return: node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = NULL, *tmp;
	unsigned int n = 0;

	if (!head)
		return (NULL);

	tmp = head;
	while (tmp)
	{
		if (n == index)
		{
			node = tmp;
			break;
		}
		tmp = tmp->next;
		n++;

	}
	if (!node)
		return (NULL);
	return (node);
}
