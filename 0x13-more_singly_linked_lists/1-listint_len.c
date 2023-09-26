#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @h: Pointer to the first node
 *
 * Return: Number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
size_t count;

count = 0;

while (h != NULL)
{
	h = h->next;
	count++;
}
return (count);
}
