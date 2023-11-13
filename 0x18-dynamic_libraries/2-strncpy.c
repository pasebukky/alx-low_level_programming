#include "main.h"

/**
 * _strncpy - copies n characters from src to dest
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of characters to be copied
 *
 * Return: Pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
char *dest_start = dest;

while (*src != '\0' && n > 0)
{
	*dest = *src;
	dest++;
	src++;
	n--;
}

while (n > 0)
{
	*dest = '\0';
	dest++;
	n--;
}
return (dest_start);
}
