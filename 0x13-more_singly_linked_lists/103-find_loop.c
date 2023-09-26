#include "lists.h"

/**
 * find_listint_loop -  Finds the loop in a linked list.
 * @head: Pointer to the first node
 *
 * Return: Address of the node where the loop starts,
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
listint_t *a = head;
listint_t *b = head;

while (a && b && b->next)
{
	a = a->next;
	b = b->next->next;

	if (a == b)
	{
		a = head;
		while (a != b)
		{
			a = a->next;
			b = b->next;
		}
		return (a);
	}
}
return (NULL);
}
