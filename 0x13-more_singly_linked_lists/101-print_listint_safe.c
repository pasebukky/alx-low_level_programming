#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the first node
 *
 * Return: Number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
size_t count;
const listint_t *present;
const listint_t *node;

count = 0;
present = head;
node = NULL;

while (present != NULL)
{
	printf("[%p] %d\n", (void *)present, present->n);
	count++;

	if (present == node)
	{
		printf("-> [%p] %d\n", (void *)present, present->n);
		exit(98);
	}
	node = present;
	present = present->next;
}
return (count);
}
