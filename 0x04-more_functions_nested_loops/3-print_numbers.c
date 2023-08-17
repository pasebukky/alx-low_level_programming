#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to 9
 * followed by a new line.
 */

void print_numbers(void)
{
    int numb;

    for (numb = '0'; numb <= '9'; numb++)
    {
        _putchar(numb);
    }
    _putchar('\n');
}
