#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a
 * parameter on each element of an array
 * @array: Array being iterate through
 * @size: Array size
 * @action: Pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array != NULL && action != NULL)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
}
