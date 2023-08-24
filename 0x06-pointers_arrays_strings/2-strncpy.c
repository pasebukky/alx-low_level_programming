#include "main.h"
#include <stddef.h>

/**
 * _strncpy - Takes at most n characters from src to dest.
 * @dest: Destination string.
 * @src: Source string.
 * @n: Maximum number of characters to be copied from src.
 *
 * Return: Destination string pointer.
 */

char *_strncpy(char *dest, char *src, int n)
{
char *a = dest;

while (n > 0 && *src)
{
	*a++ = *src++;
	n--;
}
while (n > 0)
{
	*a++ = '\0';
	n--;
}
return (dest);
}
