#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strrlen - finds len of string
 * @s: string buffer
 *
 * Return; the len
 */
unsigned int _strlen(const char *s)
{
	unsigned int len;

	len = 0;
	while(s[len])
		len++;
	return (len);
}

/**
 * add_node_end - inserts a node at the end of link
 * head: pointer to a pointer that points to list_t ele
 * str: a string (value)
 *
 * Return: pointer to modified list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *iterator = malloc(sizeof(list_t *));
	list_t *new = malloc(sizeof(list_t *));

	if (new == NULL || iterator == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		iterator = *head;
		while (iterator->next != NULL)
			iterator = iterator->next;
	}

	iterator->next = new;
	return (new);
}
