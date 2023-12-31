#include "lists.h"

/**
 * delete_nodeint_at_index -  Deletes the node at
 * index index of a listint_t linked list.
 * @head: Pointer to a pointer to the first node
 * @index: Index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *present;
listint_t *temp;
unsigned int i;

if (*head == NULL)
	return (-1);

if (index == 0)
{
	listint_t *temp = *head;
	*head = (*head)->next;
	free(temp);
	return (1);
}

present = *head;

for (i = 0; i < index - 1 && present != NULL; i++)
	present = present->next;

if (present == NULL || present->next == NULL)
	return (-1);

temp = present->next;
present->next = temp->next;

free(temp);
return (1);
}
