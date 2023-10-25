#include "lists.h"


listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (!head)
		return (NULL);
/* floyed cycle detection */
	slow = fast = head;
	while (fast && fast->next && fast->next->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			break;
	}
	if (slow == fast)
	{
		slow = head;
		while (slow != fast)
		{
			slow = slow->next;
			fast = fast->next;
		}
		return (slow);
	}
	return (NULL);
}
