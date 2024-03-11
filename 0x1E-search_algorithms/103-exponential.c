#include "search_algos.h"

/**
 * binary_search_recursive - Searches for a value in a sorted array using
 * binary search algorithm recursively.
 *
 * @array: Pointer to the first element of the array to search in
 * @left: Index of the left boundary of the subarray
 * @right: Index of the right boundary of the subarray
 * @value: Value to search for
 *
 * Return: Index where the value is located, otherwise -1 if not found
 */

int binary_search_recursive(int *array, size_t left, size_t right, int value)
{
	if (left <= right)
	{
		size_t mid = (left + right) / 2;
		size_t i;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
			printf(", %d", array[i]);
		printf("\n");

		if (array[mid] == value)
			return ((int)mid);
		else if (array[mid] < value)
			return (binary_search_recursive(array, mid + 1, right, value));
		else
			return (binary_search_recursive(array, left, mid - 1, value));
	}
	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The first index where value is located otherwise -1 if not found
 * or array is NULL
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, low, high;

	if (array == NULL)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	low = bound / 2;
	high = (bound < size) ? bound : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	return (binary_search_recursive(array, low, high, value));
}
