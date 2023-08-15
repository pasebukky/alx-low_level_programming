#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabets 10 times
 * by olubukunola pase
 * Return: 0 (success)
 */

void print_alphabet_x10(void)
{
    char alphabet;
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
    return (0);
}
