#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list.
 * @h: Head of the doubly linked list
 * Return: The number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;
	const dlistint_t *current;

	if (!h)
		return (n);

	current = h;
	while (current)
	{
		n++;
		current = current->next;
	}
	return (n);
}
