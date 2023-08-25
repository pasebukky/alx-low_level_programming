#include "main.h"

/**
 * print_buffer - Prints buffer contents.
 * @b: Buffer pointer.
 * @size: Buffer size.
 */
 
void print_buffer(char *b, int size)
{
    int p, q;

    if (size <= 0)
    {
        _putchar('\n');
        return;
    }

    for (p = 0; p < size; p += 16)
    {
        _printf("%08x: ", p);

        for (q = 0; q < 16; q++)
        {
            if (p + q < size)
            {
                _printf("%02x", (unsigned char)b[p + q]);
            }
            else
            {
                _printf("  ");
            }

            if (q % 2 != 0)
            {
                _putchar(' ');
            }
        }

        _putchar(' ');

        for (q = 0; q < 16; q++)
        {
            if (p + q < size)
            {
                if (b[p + q] >= 32 && b[p + q] <= 126)
                {
                    _putchar(b[p + q]);
                }
                else
                {
                    _putchar('.');
                }
            }
            else
            {
                break;
            }
        }

        _putchar('\n');
    }
}
