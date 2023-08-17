#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks whether a character is a digit or not
 * @c: The character to be checked
 * 
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
    int digit;
    for (digit = '0'; digit <= '9'; digit++)
    {
        if (c == digit)
        {
            return (1);
        }
    }
    
    return (0);
}

