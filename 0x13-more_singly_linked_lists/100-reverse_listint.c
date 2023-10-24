#include "lists.h"

/**
 * reverse_listint - ...
 * @head: pointer to head
 *
 * Return: pointer to head of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *temp;

	if (!head || !(*head))
		return (NULL);
	prev = NULL;
	temp = *head

	while (*head)
	{
		temp = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = temp;
	}
	*head = prev;

	return (*head);
}
