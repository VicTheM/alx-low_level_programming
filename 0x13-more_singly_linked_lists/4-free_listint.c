#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a list_t list
 * @head: pointer to head node
 *
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	while (head)
	{
		next = head;
		head = head->next;
		free(next);
	}

	free(head);
}
