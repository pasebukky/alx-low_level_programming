#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - Creates an array of integers from min to
 * max inclusive of both the min and max integers
 * @min: Minimum integer value.
 * @max: Maximum integer value.
 *
 * Return: Pointer to the newly created integers.
 * Returns NULL if memory allocation fails or min is greater than max
 */

int *array_range(int min, int max)
{
int *array_address;
int array_size, i;

if (min > max)
	return (NULL);

array_size = max - min + 1;
array_address = malloc(sizeof(int) * array_size);

if (array_address == NULL)
	return (NULL);

for (i = 0; i < array_size; i++)
	array_address[i] = min++;

return (array_address);
}
