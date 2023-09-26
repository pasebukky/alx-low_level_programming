#include "lists.h"

/**
 * free_listint_safe -  Frees a listint_t list.
 * @h: Pointer to a pointer to the first node
 *
 * Return: Size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
size_t count;
listint_t *present;
listint_t *next;

count = 0;
present = *h;
next = NULL;

while (present != NULL)
{
	printf("[%p] %d\n", (void *)present, present->n);
	next = present->next;
	count++;

if (next != NULL && next <= present)
{
	printf("-> [%p] %d\n", (void *)next, next->n);
	break;
}

free(present);

present = next;
}
*h = NULL;
return (count);
}
