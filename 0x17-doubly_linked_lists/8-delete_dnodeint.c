#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a new node at a given position.
 * @head: Head of doubly linked list
 * @index: index to insert new node
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prev, *current, *next;
	unsigned int i = 0;
	int isDeleted = 0;

	if (!head || !*head)
		return (-1);
	current = *head;
	prev = current->prev;
	while (current)
	{
		if (i == index)
		{
			next = current->next;
			if (prev)
				prev->next = next;
			else
				*head = next;
			if (next)
				next->prev = prev;
			free(current);
			isDeleted = 1;
			break;
		}
		i++;
		prev = current;
		current = current->next;
	}
	if (isDeleted)
		return (1);
	return (-1);
}
