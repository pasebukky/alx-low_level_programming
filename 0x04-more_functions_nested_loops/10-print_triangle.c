#include "main.h"

/**
 * print_triangle - Prints a triangle using
 * hashtag, followed by a line
 * 
 * @size: The size of the triangle
 */
void print_triangle(int size)
{
    int row;
    int blank;
    int hashtag;
    
    if (size <= 0)
    {
        _putchar('\n');
        return;
    }
    
    for (row = 1; row <= size; row++)
    {
        for (blank = size - row; blank > 0; blank--)
        {
            _putchar(' ');
        }
        
        for (hashtag = 1; hashtag <= row; hashtag++)
        {
            _putchar('#');
        }
        
        _putchar('\n');
    }
}
