#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: Pointer to the string to be printed.
 */
void puts_half(char *str)
{
int length = 0;
char *start;

while (str[length] != '\0')
	length++;

start = str + (length + 1) / 2;

while (*start != '\0')
{
	_putchar(*start);
        start++;
}
_putchar('\n');
}
