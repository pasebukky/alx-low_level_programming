#include "lists.h"

/**
 * sum_listint -  Returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: Pointer to the first node
 *
 * Return: Sum of all the data (n)
 */

int sum_listint(listint_t *head)
{
int sum;

sum = 0;
if (head == NULL)
	return (0);

while (head != NULL)
{
	sum += head->n;
	head = head->next;
}
return (sum);
}
