#include "main.h"

/**
 * main - prints lowercase alphabets
 * by olubukunola pase
 * Return: 0 (success)
 */

void print_alphabet(void)
{
    char alphabet;
    for (alphabet = 'a'; alphabet <= 'z'; alphabet++);
    {
        _putchar(alphabet);
    }
    _putchar('\n');
}
