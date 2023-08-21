#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copies the string pointed to by src to dest.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
    char *initial_dest = dest;

    while ((*dest = *src) != '\0')
    {
        dest++;
        src++;
    }

    return initial_dest;
}
