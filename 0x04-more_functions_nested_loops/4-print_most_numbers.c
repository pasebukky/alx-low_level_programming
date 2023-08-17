#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 to 9
 * with the exemption of 2 and 4
 */

void print_most_numbers(void)
{
    int numb;

    for (numb = '0'; numb <= '9'; numb++)
    {
        if (numb != '2' && numb != '4')
        {
            _putchar(numb);
        }
    }
    _putchar('\n');
}
