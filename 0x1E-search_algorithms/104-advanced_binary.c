#include "search_algos.h"

/**
 * print_array - prints an array or subarray during a binary search
 *
 * @array: pointer to the first element of the array
 * @start: starting index of the array or subarray
 * @end: ending index of the array or subarray
 */

void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i < end)
			printf(", ");
		else
			printf("\n");
	}
}


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
	size_t mid;

	if (start <= end)
	{
		mid = (start + end) / 2;

		print_array(array, start, end);

	if (array[mid] == value)
	{
		if (mid > 0 && array[mid - 1] == value)
			return (advanced_binary_recursive(array, start, mid, value));
		return ((int)mid);
	}
	else if (array[mid] < value)
		return (advanced_binary_recursive(array, mid + 1, end, value));
	else
		return (advanced_binary_recursive(array, start, mid - 1, value));
	}
	return (-1);
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
	if (array == NULL)
		return (-1);
	return (advanced_binary_recursive(array, 0, size - 1, value));
}
