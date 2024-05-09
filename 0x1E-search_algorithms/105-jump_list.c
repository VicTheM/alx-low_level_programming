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
	listint_t *tmp = list;
	listint_t *prevv = list;
	size_t steps = sqrt(size);
	size_t c;
	size_t prev = 0;

	if (!list || size < 1)
		return (NULL);

	while (tmp->next && tmp->n < value && tmp->index < size)
	{
		prevv = tmp;
		for (c = 0; tmp->next && c < steps; c++)
			tmp = tmp->next;
		printf("Value checked at index [%ld] = [%i]\n", tmp->index, tmp->n);
		if (!(tmp->next))
			break;
		prev += steps;
	}
	
	if (tmp->n >= value)
	{
		printf("Value found between indexes [%ld] and [%ld]\n", prevv->index, tmp->index);
		while (prevv->index <= tmp->index)
		{
			printf("Value checked at index [%ld] = [%i]\n", prevv->index, prevv->n);
			if (prevv->n == value)
				return (prevv);
			prevv = prevv->next;
		}
	}
	else
	{
		printf("Value found between indexes [%ld] and [%ld]\n", prevv->index, size - 1);
		while (prevv)
		{
			printf("Value checked at index [%ld] = [%i]\n", prevv->index, prevv->n);
			prevv = prevv->next;
		}
	}

	return (NULL);
}
