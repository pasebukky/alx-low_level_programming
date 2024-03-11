#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located otherwise -1 if not
 * found or array is NULL
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t position, low, high;
	double interpolation_ratio;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (size)
	{
		interpolation_ratio = (double)(high - low) /
					(array[high] - array[low]) *
					(value - array[low]);
		position = (size_t)(low + interpolation_ratio);
		printf("Value checked array[%d]", (int)position);
		if (position >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[position]);
		}

		if (array[position] == value)
			return ((int)position);

		if (array[position] < value)
			low = position + 1;
		else
			high = position - 1;

		if (low == high)
			break;
	}
	return (-1);
}
