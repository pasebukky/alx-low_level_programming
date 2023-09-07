#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: Size of the memory being allocated
 *
 * Return: Pointer to the allocated memory.
 * Function should cause normal process termination
 * with a status value of 98 if malloc fails
 */
 
void *malloc_checked(unsigned int b)
{
    void* ptr;
    
    ptr = malloc(b);

    if (ptr == NULL)
    {
        exit(98);
    }
    return (ptr);
}
