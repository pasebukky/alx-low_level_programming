#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the first node
 *
 * Return: Number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
listint_t *present = (listint_t *)head;
listint_t *temp;

while (present != NULL)
{
	printf("[%p] %d\n", (void *)present, present->n);
	count++;
	temp = present;
	present = present->next;
	temp->next = NULL;

	if (temp <= present)
	{
		printf("-> [%p] %d\n", (void *)present, present->n);
		exit(98);
	}
}
return (count);
}

