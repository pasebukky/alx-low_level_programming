#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks whether a character is an uppercase letter
 * @c: The character to be checked
 * 
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
    int upper;
    for (upper = 'A'; upper <= 'Z'; upper++)
    {
        if (c == upper)
        {
            return (1);
        }
    }
    
    return (0);
}

