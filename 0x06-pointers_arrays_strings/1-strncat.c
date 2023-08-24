#include "main.h"
#include <stddef.h>

/**
 * _strncat - Adds the most n bytes from src to dest.
 * @dest: String destination.
 * @src: Edited source string.
 * @n: Maximum bytes to be used from src.
 *
 * Return: Destination string pointer.
 */
 
char *_strncat(char *dest, char *src, int n)
{
    char *a = dest;
    
    while (*a)
    {
        a++;
    }
    
    while (n > 0 && *src)
    {
        *a++ = *src++;
        n--;
    }

    *a = '\0';

    return dest;
}

