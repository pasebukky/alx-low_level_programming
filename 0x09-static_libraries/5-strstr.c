#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates the first instance of a substring within a string.
 * @haystack: The string to search within
 * @needle: The substring to locate
 *
 * Return: Pointer to the first occurrence of 'needle' in 'haystack',
 * or 0 if not found.
 */

char *_strstr(char *haystack, char *needle)
{
    while (*haystack != '\0')
    {
        char *h = haystack;
        char *n = needle;

        while (*n != '\0' && *h == *n)
        {
            h++;
            n++;
        }

        if (*n == '\0')
            return (haystack);
        haystack++;
    }
    return (0);
}
