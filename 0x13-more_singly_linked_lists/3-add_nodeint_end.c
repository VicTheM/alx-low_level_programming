#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint_end - inserts a node at the end of link
 * @head: pointer to a pointer that points to list_t ele
 * @n: (value)
 *
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *iterator;
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	iterator = *head;
	while (iterator->next != NULL)
		iterator = iterator->next;

	iterator->next = new;
	return (new);
}
