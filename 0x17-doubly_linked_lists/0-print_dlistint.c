#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: Head of the doubly linked list
 *
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;
	const dlistint_t *current;

	if (!h)
		return (n);

	current = h;
	while (current)
	{
		printf("%d\n", current->n);
		n++;
		current = current->next;
	}
	return (n);
}
