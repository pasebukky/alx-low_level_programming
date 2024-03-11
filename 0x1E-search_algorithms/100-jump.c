#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index of value searched for otherwise -1 if the value is not
 * present in array or if array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t block_size, current, jump;

	if (array == NULL || size == 0)
		return (-1);

	block_size = sqrt(size);
	for (current = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		current = jump;
		jump += block_size;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", current, jump);

	jump = jump < size - 1 ? jump : size - 1;

	for (; current < jump && array[current] < value; current++)
		printf("Value checked array[%ld] = [%d]\n", current, array[current]);

	printf("Value checked array[%ld] = [%d]\n", current, array[current]);
	return (array[current] == value ? (int)current : -1);
}
