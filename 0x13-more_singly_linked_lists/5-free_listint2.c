#include "lists.h"

/**
 * free_listint2 -  Frees a listint_t list.
 * @head: Pointer to a pointer to the first node
 */

void free_listint2(listint_t **head)
{
listint_t *present;

if (head == NULL || *head == NULL)
	return;

while (*head != NULL)
{
	present = *head;
	*head = (*head)->next;
	free(present);
}
}
