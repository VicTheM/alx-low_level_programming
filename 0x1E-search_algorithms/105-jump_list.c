#include "search_algos.h"
#include <math.h>

/**
 * jump_list - An optimized version of linear search for linked list
 *
 * @list: head of linked list
 * @size: size of the array
 * @value: value to search for
 *
 * Return: Pointer to node of first occurence of @value or NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *t = list;
	listint_t *p = list;
	size_t steps = sqrt(size);
	size_t c;
	size_t prev = 0;

	if (!list || size < 1)
		return (NULL);
	while (t->next && t->n < value && t->index < size)
	{
		p = t;
		for (c = 0; t->next && c < steps; c++)
			t = t->next;
		printf("Value checked at index [%ld] = [%i]\n", t->index, t->n);
		if (!(t->next))
			break;
		prev += steps;
	}
	if (t->n >= value)
	{
		printf("Value found between indexes [%ld] and [%ld]\n", p->index, t->index);
		while (p->index <= t->index)
		{
			printf("Value checked at index [%ld] = [%i]\n", p->index, p->n);
			if (p->n == value)
				return (p);
			p = p->next;
		}
	}
	else
	{
		printf("Value found between indexes [%ld] and [%ld]\n", p->index, size - 1);
		while (p)
		{
			printf("Value checked at index [%ld] = [%i]\n", p->index, p->n);
			p = p->next;
		}
	}
	return (NULL);
}
