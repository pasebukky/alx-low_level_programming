#include "lists.h"

/**
 * reverse_listint -  Reverses a listint_t linked list.
 * @head: Pointer to a pointer to the first node
 *
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *before;
listint_t *next;

before = NULL;
next = NULL;

while (*head != NULL)
{
	next = (*head)->next;
	(*head)->next = before;
	before = *head;
	*head = next;
}
*head = before;

return (before);
}
