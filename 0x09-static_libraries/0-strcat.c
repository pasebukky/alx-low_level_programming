#include "main.h"

/**
 * _strcat - Appends two strings
 * @dest: Destination string
 * @src: Source string to be appended
 *
 * Return: Pointer to the dest
 */

char *_strcat(char *dest, char *src)
{
    char *dest_start = dest;

    while (*dest != '\0')
    {
        dest++;
    }

    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';
    return (dest_start);
}
