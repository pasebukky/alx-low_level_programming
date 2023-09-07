#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array.
 * @nmemb: Number of array elements
 * @size: Size of each element in the array
 *
 * Return: Pointer to the allocated memory.
 * Returns NULL if allocation fails or nmemb or size is 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;

if (nmemb == 0 || size == 0)
	return (NULL);

ptr = malloc(nmemb * size);

if (ptr == NULL)
	return (NULL);

memset(ptr, 0, nmemb * size);

return (ptr);
}
