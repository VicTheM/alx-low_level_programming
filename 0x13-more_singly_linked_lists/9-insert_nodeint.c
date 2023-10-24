#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node
 * @head: pointer to head
 * @idx: position to insert
 * @n: value for new list
 *
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp, *prev;
	unsigned int c;

	if (head == NULL || (*head == NULL && n > 0))
		return (NULL);
	new = malloc(sizeof(listint_t));
	new->n = n;
	if (idx == 0 && *head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (new);
	}
	prev = temp = *head;
	while (idx >= c && (temp || c == idx))
	{
		if (c == idx)
		{
			new->next = temp;
			prev->next = new;
			return (new);
		}
		prev = temp;
		temp = temp->next;
		c++;
	}
	free(new);
	return (NULL);
}
