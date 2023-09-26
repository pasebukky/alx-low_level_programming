#include "lists.h"

/**
 * print_listint - Prints all the elements of a list_t list
 * @h: Pointer to the first node
 *
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t count;

count = 0;

while (h != NULL)
{
	printf("%d\n", h->n);
	h = h->next;
	count++;
}
return (count);
}
