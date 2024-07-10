#include "lists.h"

/**
 * free_dlistint - Frees of a dlistint_t list.
 * @head: Head of the doubly linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (!head)
		return;
	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	free(head);
}
