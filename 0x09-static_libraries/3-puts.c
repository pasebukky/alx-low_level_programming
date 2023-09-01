#include "main.h"
#include <unistd.h>

/**
 * _puts - prints a string then a new line afterwards
 * @s: String being printed
 */

void _puts(char *s)
{
    while (*s != '\0')
    {
        write(1, s, 1);
        s++;
    }

    write(1, "\n", 1);
}
