#include "main.h"

/**
 * _strspn - calculates the length of the first portion of 's' 
 * containing only characters found in 'accept'.
 * @s: String to search within
 * @accept: String containing characters to be matched
 *
 * Return: Count of bytes in the starting section of 's' 
 * with characters from 'accept' only.
 */

unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;

    while (*s != '\0')
    {
        char *a = accept;

        while (*a != '\0')
        {
            if (*s == *a)
            {
                count++;
                break;
            }
            a++;
        }

        if (*a == '\0')
            return (count);
        s++;
    }
    return (count);
}
