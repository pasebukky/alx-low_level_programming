#include "lists.h"

/**
 * free_lists - Frees a list_t list.
 * @head: Pointer to the first node
 */

void free_list(list_t *head)
{
list_t *temp;

while (head != NULL)
{
	temp = head;
	head = head->next;
	free(temp->str);
	free(temp);
}
}
