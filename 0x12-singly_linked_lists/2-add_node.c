#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - finds len of string
 * @s: string buffer
 *
 * Return: the len
 */
unsigned int _strlen(const char *s)
{
	unsigned int len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

/**
 * add_node - inserts a list to the beggining of link
 * @head: pointer to a pointer that points to list_t ele
 * @str: a string (value)
 *
 * Return: pointer to modified list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t *));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;

	return (*head);
}
