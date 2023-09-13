#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: Pointer to the array being searched
 * @size: Number of array elements
 * @cmp: Pointer to the function to be used to compare values
 *
 * Return: Index of the first element for which the cmp
 * function does not return 0. Otherwise return -1 if no
 * element matches or if the size is less than or equal to 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int a;

if (size <= 0)
	return (-1);

for (a = 0; a < size; a++)
{
	if (cmp(array[a]) != 0)
	{
		return (a);
	}
}

return (-1);
}
