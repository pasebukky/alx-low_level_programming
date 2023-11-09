#include "lists.h"

/**
 * print_dlistint - Prints all elements of a dlistsint_t list
 *
 * @h: Pointer to the head of the node
 * Return: Number of nodes
 *
 */

size_t print_dlistint(const dlistint_t *h)
{
size_t num_node;

num_node = 0;

while (h != NULL)
{
	printf("%d\n", h->n);
	num_node++;
	h = h->next;
}
return (num_node);
}
