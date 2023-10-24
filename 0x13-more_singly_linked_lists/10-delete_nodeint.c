#include "lists.h"

/**
 * delete_nodeint_at_index - deletes and frees a node
 * @head: pointer to head;
 * @n: array inndex
 *
 * Return: 1 Sucess -1 Failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int n)
{
	unsigned int c;
	listint_t *temp, *prev;

	if (head == NULL || *head == NULL)
		return (-1);
	if (n == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	temp = prev = *head;
	c = 0;
	while (temp)
	{
		if (c == n)
		{
			prev->next = temp->next;
			free(temp);
			return (1);
		}
		prev = temp;
		temp = temp->next;
		c++;
	}
	return (-1);
}
