#include "main.h"
#include <stdio.h>

/**
 * _memset - fills a block of memory with a
 * specific value
 * @s: memory area pointed to
 * @b: constant byte to be filled in memory
 * @n: number of bytes to be filled
 *
 * Return: Pointer to s
 */
 
char *_memset(char *s, char b, unsigned int n)
{
    char *start = s;
    if (n > 0)
    {
        do
        {
            *s = b;
            s++;
            n--;
        } while (n > 0);
    }
    return (start);
}
