#include "lists.h"

/**
 * pop_listint - deletes head
 * @head: double pointer to head node
 *
 * Return: n or 0
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	n = 0;
	if (head == NULL || *head == NULL)
	{
		free(*head);
		return (0);
	}
	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (n);
}
