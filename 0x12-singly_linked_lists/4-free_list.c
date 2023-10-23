#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a list_t list
 * @head: pointer to head node
 *
 */
void free_list(list_t *head)
{
	list_t *next;

	while (head)
	{
		next = head;
		head = head->next;
		free(next->str);
		free(next);
	}

	free(head);
}
