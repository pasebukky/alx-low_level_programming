#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Returns the length of a string
 * @s: Input string whose length is being
 * calculated
 *
 * Return: Length of string.
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
	return 0;
return _strlen_recursion(s + 1) + 1;
}
