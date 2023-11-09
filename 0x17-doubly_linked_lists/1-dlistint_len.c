#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list
 *
 * @h: Pointer to the head of the node
 * Return: Number of elements
 *
 */

size_t dlistint_len(const dlistint_t *h)
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
