#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the previously allocated memory block
 * @old_size: Size, in bytes, of the allocated space for ptr
 * @new_size: New size, in bytes of the new memory block
 *
 * Return: Pointer to the new memory block. Returns NULL if it fails.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
if (new_size == 0)
{
	free(ptr);
	return (NULL);
}

if (ptr == NULL)
{
	return (malloc(new_size));
}

if (new_size == old_size)
{
	return (ptr);
}

return (realloc(ptr, new_size));
}
