#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of integers
 * using the Jump search algorithm
 *
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in list
 * @value: value to search for
 *
 * Return: pointer to the first node where value is located
 * otherwise NULL if not found
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump_step, block_start, block_end;
	listint_t *prev;

	if (list == NULL || size == 0)
		return (NULL);

	jump_step = (size_t)sqrt((double)size);
	block_start = 0;
	block_end = 0;

	do {
		prev = list;
		block_start = block_end;
		block_end += jump_step;

		while (list->next && list->index < block_end)
			list = list->next;

		if (list->next == NULL && block_end != list->index)
			block_end = list->index;

		printf("Value checked at index [%d] = [%d]\n", (int)block_end, list->n);

	} while (block_end < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)block_start, (int)list->index);

	for (; prev && prev->index <= list->index; prev = prev->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)prev->index, prev->n);
		if (prev->n == value)
			return (prev);
	}
	return (NULL);
}
