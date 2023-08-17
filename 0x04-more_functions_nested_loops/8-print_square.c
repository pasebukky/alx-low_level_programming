#include "main.h"

/**
 * print_square - Prints a square of hashtag
 * followed by a new line
 * 
 * @size: The size of the square.
 */
void print_square(int size)
{
    int p;
    int q;
    if (size <= 0)
    {
        _putchar('\n');
    }
    else
    {
        for (p = 0; p < size; p++)
        {
            for (q = 0; q < size; q++)
            {
                _putchar('#');
            }
            _putchar('\n');
        }
    }
}
