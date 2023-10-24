#include "lists.h"

/**
 * get_nodeint_at_index - retrieves a node of the list
 * @head: head pointer
 * @index: same as C array index
 *
 * Return: pointer to the (n + 1)th node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int c = 0;

	if (head)
	{
		temp = head;
		while (c < index)
		{
			temp = temp->next;
			if (temp == NULL)
				return (NULL);
			c++;
		}
		return (temp);
	}
	return (NULL);
}
