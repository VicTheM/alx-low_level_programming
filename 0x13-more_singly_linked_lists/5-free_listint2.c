#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a list_t list
 * @head: pointer to head node
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;

	while (*head)
	{
		next = *head;
		*head = (*head)->next;
		free(next);
	}
}
