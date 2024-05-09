#include "search_algos.h"
#include <math.h>

/**
 * linear_skip  - An optimized version of linear jump search for linked list
 *
 * @list: head of linked list
 * @value: value to search for
 *
 * Return: Pointer to node of first occurence of @value or NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *tmp = list;
	skiplist_t *prev = list;

	while (tmp && tmp->n < value && tmp->express)
	{
		prev = tmp;
		tmp = tmp->express;
		printf("Value checked at index [%ld] = [%i]\n", tmp->index, tmp->n);
	}
	
	if (tmp->n < value)
	{
		prev = tmp;
		while (tmp->next)
			tmp = tmp->next;
	}
	
	printf("Value found between indexes [%ld] and [%ld]\n", prev->index, tmp->index);
	while (prev && prev->index <= tmp->index)
	{
		printf("Value checked at index [%ld] = [%i]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}

		
