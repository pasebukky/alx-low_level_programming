#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to a string.
 *
 * Return: Length of the string.
 */
int _strlen(char *s)
{
int length = 0;
int a;
for (a = 0; s[a] != '\0'; a++)

	length++;
return (length);
}
