#include "main.h"

/**
 * _isdigit - Verifies that a character is a digit
 * @c: Character to be checked
 *
 * Return: 1 for digits, 0 otherwise
 */

int _isdigit(int c)
{
    if (c >= '0' && c <= '9')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
