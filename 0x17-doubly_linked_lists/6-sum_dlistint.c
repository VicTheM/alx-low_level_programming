#include "lists.h"

/**
 * sum_dlistint - Peturns the sum of all the data (n)
 *	of a dlistint_t linked list.
 * @head: Head of the doubly linked list
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *tmp;

	tmp = head;
	if (!head)
		return (sum);
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
