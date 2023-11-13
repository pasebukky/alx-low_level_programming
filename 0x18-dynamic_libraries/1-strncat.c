#include "main.h"

/**
 * _strncat - Appends n characters from src to dest
 * @dest: Destination string
 * @src: Source string to be appended
 * @n: Maximum number of characters to be appended
 *
 * Return: Pointer to the dest
 */

char *_strncat(char *dest, char *src, int n)
{
char *dest_start = dest;

while (*dest != '\0')
{
	dest++;
}

while (*src != '\0' && n > 0)
{
	*dest = *src;
	dest++;
	src++;
	n--;
}
*dest = '\0';
return (dest_start);
}
