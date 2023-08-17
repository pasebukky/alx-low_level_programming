#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers
 * from 0 to 14.
 */
void more_numbers(void) 
{
    int numb;
    int i;

    for (i = 0; i < 10; i++)
    {
        for (numb = 0; numb <= 14; numb++)
        {
            if (numb > 9)
            {
                _putchar('0' + numb / 10);
            }
            _putchar('0' + numb % 10);
        }
        _putchar('\n');
    }
}
