#include "lists.h"

/**
 * get_nodeint_at_index -  Returns the nth node of a listint_t linked list.
 * @head: Pointer to a pointer to the first node
 * @index: Index of the node, starting at 0
 *
 * Return: nth node otherwise NULL if the node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int exact_node;

for (exact_node = 0; head != NULL; exact_node++)
{
	if (exact_node == index)
		return (head);
	head = head->next;
}
return (NULL);
}
