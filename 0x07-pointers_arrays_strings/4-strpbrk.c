#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * @s: pointer to the string to be searched
 * @accept: pointer to string with bytes to search for
 *
 * Return: pointer to the byte in s that matches one
 * of the bytes in accept, or NULL if no such
 * byte is found
 */

char *_strpbrk(char *s, char *accept)
{
char *a;

while (*s)
{
	a = accept;

	while (*a != '\0')
	{
		if (*s == *a)
		{
			return (s);
		}
		a++;
	}
	s++;
}
return (NULL);
}
