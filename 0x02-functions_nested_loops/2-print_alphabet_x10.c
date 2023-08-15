#include "main.h"

/**
 * print_alphabet_x10 - Prints lowercase alphabets 10 times
 */

void print_alphabet_x10(void)
{
    char alphabet; /*Prints all lowercase alphabets*/
    int multiples;

    multiples = 0;

    while (multiples < 10)
    {
        for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
        {
            _putchar(alphabet);
        }
        _putchar('\n');

        multiples++;
    }
}
