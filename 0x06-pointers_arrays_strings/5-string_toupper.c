#include "main.h"
#include <stdio.h>

/**
 * string_toupper - Changes lowercase alphabets
 * to uppercase within a string.
 * @str: Input string.
 *
 * Return: Modified string pointer.
 */

char *string_toupper(char *str)
{
int b;

for (b = 0; str[b] != '\0'; b++)
{
	if (str[b] >= 'a' && str[b] <= 'z')
	{
		str[b] = str[b] - ('a' - 'A');
	}
}
return (str);
}
