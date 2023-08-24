#include "main.h"
#include <string.h>

/**
 * _strcat - Combines two strings.
 * @dest: String destination.
 * @src: Updated source string.
 *
 * Return: Destination string.
 */
 
char *_strcat(char *dest, const char *src)
{
    char *a = dest + strlen(dest);

    while (*src != '\0')
    {
        *a = *src;
        a++;
        src++;
    }

    *a = '\0';

    return dest;
}
