#include "search_algos.h"

/**
 * advanced_binary_recursive - searches for a value in a sorted array
 * of integers using the Advanced Binary search algorithm (with recursion)
 *
 * @array: pointer to the first element of the array to search in
 * @start: starting index for the search
 * @end: ending index for the search
 * @value: value to search for
 *
 * Return: index where value is located otherwise -1 if not found
 */

int advanced_binary_recursive(int *array, size_t start, size_t end, int value)
{
	size_t i;

	if (end < start)
		return (-1);

	printf("Searching in array: ");
	for (i = start; i < end; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = start + (end - start) / 2;
	if (array[i] == value && (i == start || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recursive(array, start, i, value));
	return (advanced_binary_recursive(array, i + 1, end, value));
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * using the Advanced Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located otherwise -1 if not found or
 * array is NULL
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (advanced_binary_recursive(array, 0, size - 1, value));
}
