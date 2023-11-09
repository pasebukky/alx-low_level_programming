#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 *
 * @head: Pointer to the first node
 * @index: Index of the node, starting from 0
 * Return: nth node or NULL if the node doesn't exist
 *
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i;

for (i = 0; head != NULL; i++)
{
	if (i == index)
		return (head);
	head = head->next;
}
return (NULL);
}
