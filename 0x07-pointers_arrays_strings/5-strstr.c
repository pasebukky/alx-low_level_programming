#include "main.h"
#include <stdio.h>

/**
 * _strstr - finds the first occurrence of the
 * substring in a string
 * @haystack: pointer to the string being searched
 * @needle: pointer to the substring being searched
 *
 * Return: Pointer to the beginning of the located
 * substring, or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
	char *h = haystack;
	char *n = needle;

	while (*n != '\0' && *h == *n)
	{
		h++;
		n++;
	}

	if (*n == '\0')
	{
		return (haystack);
	}
	haystack++;
}
return (NULL);
}
