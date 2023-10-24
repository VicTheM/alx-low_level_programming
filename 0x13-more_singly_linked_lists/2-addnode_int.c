#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint - inserts a list to the beggining of link
 * @head: pointer to a pointer that points to list_t ele
 * @n: (value)
 *
 * Return: pointer to modified listi head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
