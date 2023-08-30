#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Prints a string followed by a new line.
 * @s: Input string being printed.
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
	_putchar('\n');
}
_putchar(*s);
_puts_recursion(s + 1);
}
