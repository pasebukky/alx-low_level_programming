#include "main.h"
#include <stdio.h>

/**
 * _strchr - search for the first occurrence 
 * of a specific character in a given string
 * @s: pointer to string being searched
 * @c: character being searched for
 *
 * Return: Pointer to the first occurrence of 'c' in s
 * or NULL if 'c' is not found
 */
 
char *_strchr(char *s, char c)
{
    while (*s != c)
    {
        if (*s == '\0')
        {
            return (NULL);
        }
        s++;
    }
    return (s);
}
