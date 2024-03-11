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
 * binary_search - Searches for a value in a sorted array using binary search
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where the value is located, otherwise -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (binary_search_recursive(array, 0, size - 1, value));
}
