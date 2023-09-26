#include "lists.h"

/**
 * print_listint_safe-  Prints a listint_t linked list.
 * @head: Pointer to the first node
 *
 * Return: Number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;

while (head != NULL)
{
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	count++;

	if (head != NULL && head <= head->next)
	{
		printf("-> [%p] %d\n", (void *)head, 98);
		exit(98);
	}
}
return (count);
}
