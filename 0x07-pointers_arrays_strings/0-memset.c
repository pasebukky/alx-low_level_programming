#include "main.h"
#include <stdio.h>

/**
 * _memset - fills a block of memory with a
 * specific value
 * @s: memory area pointed to
 * @b: constant byte to be filled in memory
 * @n: number of bytes to be filled
 *
 * Return: Pointer to @s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;

for (a = 0; a < n; a++)
{
	s[a] = b;
}
return (s);
}
