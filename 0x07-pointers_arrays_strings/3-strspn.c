#include "main.h"
#include <stdio.h>

/**
 * _strspn - find the length of the prefix of a 
 * string that contains only certain characters.
 * @s: pointer to the string being searched
 * @accept: pointer to the string with certain 
 * characters
 *
 * Return: Number of bytes in the initial segment of s which consist only of bytes from accept
 */
 
unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;

    while (*s)
    {
        char *a = accept;
        while (*a)
        {
            if (*s == *a)
            {
                count++;
                break;
            }
            a++;
        }
        if (*a == '\0')
        {
            break;
        }
        s++;
    }

    return (count);
}
