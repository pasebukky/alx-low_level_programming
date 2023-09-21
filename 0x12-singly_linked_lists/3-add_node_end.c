#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to a pointer to the first node
 * @str: string to be duplicated and added to the new node
 *
 * Return: Address of the new node or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *temp;

new_node = malloc(sizeof(list_t));

if (str == NULL)
	return (NULL);

if (new_node == NULL)
	return (NULL);

new_node->str = strdup(str);

if (new_node->str == NULL)
{
	free(new_node);
	return (NULL);
}

new_node->len = strlen(str);
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
