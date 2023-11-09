#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a slistint_t list
 *
 * @head: Pointer to a pointer to the head
 * @n: Value to be assigned to the new node
 * Return: Address of the new element or NULL if it failed
 *
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node;
dlistint_t *last_node;

last_node = *head;

new_node = malloc(sizeof(dlistint_t));

if (new_node == NULL)
	return (NULL);

new_node->n = n;
new_node->next = NULL;

if (*head == NULL)
{
	new_node->prev = NULL;
	*head = new_node;
	return (new_node);
}

while (last_node->next != NULL)
	last_node = last_node->next;

new_node->prev = last_node;
last_node->next = new_node;

return (new_node);
}
