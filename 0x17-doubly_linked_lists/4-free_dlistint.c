#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list
 *
 * @head: Pointer to the head of the node
 *
 */

void free_dlistint(dlistint_t *head)
{
dlistint_t *current;

while (head != NULL)
{
	current = head;
	head = head->next;
	free(current);
}
}
