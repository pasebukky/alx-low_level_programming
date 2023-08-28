#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies a block of memory from a
 * source location to a destination location.
 * @dest: destination memory pointer
 * @src: source memory pointer
 * @n: number of bytes to be copied
 *
 * Return: destination pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *original_destination = dest;
while (n > 0)
{
	*dest = *src;
	dest++;
	src++;
	n--;
}
return (original_destination);
}
