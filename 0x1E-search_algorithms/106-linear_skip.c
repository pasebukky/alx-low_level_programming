#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted singly linked list
 * with an express lane using the Linear search algorithm.
 *
 * @list: pointer to the head of the list to search in.
 * @value: value to search for.
 *
 * Return: pointer to the first node where value is located,
 * otherwise NULL if value is not present in list or if head is NULL.
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current_node, *express_jump;

	if (list == NULL)
		return (NULL);

	for (current_node = express_jump = list; express_jump->next != NULL
		&& express_jump->n < value;)
	{
		current_node = express_jump;
		if (express_jump->express != NULL)
		{
			express_jump = express_jump->express;
			printf("Value checked at index [%ld] = [%d]\n",
			express_jump->index, express_jump->n);
		}
		else
		{
			while (express_jump->next != NULL)
				express_jump = express_jump->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
		current_node->index, express_jump->index);

	for (; current_node->index < express_jump->index && current_node->n < value;
		current_node = current_node->next)
		printf("Value checked at index [%ld] = [%d]\n", current_node->index,
			current_node->n);
	printf("Value checked at index [%ld] = [%d]\n", current_node->index,
		current_node->n);

	return (current_node->n == value ? current_node : NULL);
}
