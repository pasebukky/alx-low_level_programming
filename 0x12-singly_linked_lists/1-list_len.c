#include "lists.h"

/**
 * list_len - Returns the number of elemnets in a linked list
 * @h: Pointer to the first node
 *
 * Return: Number of nodes
 */

size_t list_len(const list_t *h)
{
size_t num_node;

num_node = 0;

while (h != NULL)
{
	num_node++;
	h = h->next;
}
return (num_node);
}
