#include "main.h"

/**
 * _memcpy - copies memory area from src to dest
 * @dest: Pointer to the dest memory area
 * @src: Pointer to the source memory area
 * @n: Number of bytes to be copied
 *
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *dest_start = dest;

while (n > 0)
{
	*dest = *src;
	dest++;
	src++;
	n--;
}
return (dest_start);
}
