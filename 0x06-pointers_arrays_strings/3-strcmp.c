#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Compares 2 strings using a loop.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Negative, positive, or zero value if s1 is
 * less than, greater than, or equal to s2.
 */

int _strcmp(char *s1, char *s2)
{
for (; *s1 != '\0' && *s1 == *s2; s1++, s2++)
	/* Continues the loop until the strings are different
	 * or until the end of the strings */
return (*s1 - *s2);
}
