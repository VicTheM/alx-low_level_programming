#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list
 * of integers.
 *
 * @list: A pointer to the head of the skip list to search in.
 * @value: The value to search for.
 *
 * Return: A pointer on the first node where value is located,
 * otherwise NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *curr, *prev;

	if (!list)
		return (NULL);

	curr = prev = list;

	while (curr->n < value && curr->next)
	{
		prev = curr;
		if (curr->express)
		{
			curr = curr->express;
			printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);
		}
		else
		{
			while (curr->next)
				curr = curr->next;
		}
	}

	printf("Value found between indexes [%lu] and [%ld]\n",
			prev->index, curr->index);
	while (prev->n < value && prev->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		prev = prev->next;
	}
	printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);

	if (prev->n == value)
		return (prev);
	return (NULL);
}
