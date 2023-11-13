#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for a set of characters.
 * @s: The string to search within
 * @accept: The set of characters to search for
 *
 * Return: Pointer to the first matching character in 's'
 * from 'accept', or 0 if none is found.
 */

char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
	char *a = accept;

	while (*a != '\0')
	{
		if (*s == *a)
			return (s);
		a++;
	}
	s++;
}
return (0);
}
