#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Pointer to a pointer to the first node
 * @n: integer to be added to the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node;
listint_t *temp;

if (head == NULL)
	return (NULL);

new_node = malloc(sizeof(listint_t));

if (new_node == NULL)
	return (NULL);

new_node->n = n;
new_node->next = NULL;

if (*head == NULL)
	*head = new_node;
else
{
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;
}
return (new_node);
}