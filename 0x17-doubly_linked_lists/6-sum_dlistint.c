#include "lists.h"

/**
 * sum_dlistint - Prints the sum of all the data of a dlistint_t linked list.
 *
 * @head: Pointer to the first node
 * Return: Sum of all data otherwise 0 if the list is empty
 *
 */

int sum_dlistint(dlistint_t *head)
{
int sum;

sum = 0;

while (head != NULL)
{
	sum += head->n;
	head = head->next;
}
return (sum);
}
