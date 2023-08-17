#include "main.h"

/* print_line - prints underscore to form
 * straight lines in the terminal
 *
 * @n: The number of times the character '_'
 * should be printed.
 */

void print_line(int n) 
{
    int line;
    if (n <= 0)
    {
        _putchar('\n');
    }
    else
    {
        for (line = 0; line < n; line++)
        {
            _putchar('_');
        }
        _putchar('\n');
    }
}
