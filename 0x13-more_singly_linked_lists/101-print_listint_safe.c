#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Head pointer to the listint_t list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t num = 0;

	if (!head)
		exit(98);

	slow = head;
	fast = head;
	num++;
	while (slow->next)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		if (fast && fast->next->next)
			fast = fast->next->next;
		else
			fast = NULL;
		if (slow == fast)
		{
			printf("[%p] %d\n", (void *)fast, fast->n);
			printf("[%p] %d\n", (void *)fast->next, fast->next->n);
			printf("->[%p] %d\n", (void *)fast->next->next, fast->next->next->n);
			exit(98);
		}
		num++;
	}
	printf("[%p] %d\n", (void *)slow, slow->n);
	return (num);
}
