#include "main.h"
#include <stddef.h>

/**
 * _strchr - Finds the first occurrence of characters within strings
 * @s: String to be searched
 * @c: Character to be found
 *
 * Return: Pointer to the first occurrence of c in
 * s, or 0 for unfound characters
 */

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
	if (*s == c)
		return (s);
	s++;
}
if (c == '\0')
	return (s);
return (0);
}
