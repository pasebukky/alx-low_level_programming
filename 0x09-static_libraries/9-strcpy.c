#include "main.h"

/**
 * _strcpy - copies string from src to dest
 * @dest: Destination string
 * @src: Source string
 *
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
    char *dest_start = dest;

    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return (dest_start);
}

