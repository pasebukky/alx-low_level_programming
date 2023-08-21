#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: Pointer to the string to be printed in reverse.
 */
void print_rev(char *s)
{
    int length = 0;
    int a;

    /* Calculates length of the string */
    while (s[length] != '\0')
    {
        length++;
    }

    /* Print reverse string */
    for (a = length - 1; a >= 0; a--)
    {
        _putchar(s[a]);
    }

    _putchar('\n');
}
