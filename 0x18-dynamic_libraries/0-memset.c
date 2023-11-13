#include "main.h"

/**
 * _memset - Fills memory with constant byte
 * @s: Pointer to the memory to be filled
 * @b: Constant byte to fill memory
 * @n: Number of bytes to be filled
 *
 * Return: Pointer to @s memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
char *start = s;

while (n > 0)
{
	*s = b;
	s++;
	n--;
}
return (start);
}
