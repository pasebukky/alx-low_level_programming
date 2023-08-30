#include "main.h"
#include <stdio.h>

/**
 * wildcmp - Compares two strings
 * @s1: First inputted string.
 * @s2: Second inputted string which could
 * contain special characters
 *
 * Return: 1 if the strings match,otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
if (*s2 == '\0')
	return (*s1 == '\0');
if (*s2 == '*')
{
	if (*(s2 + 1) == '*')
		return wildcmp(s1, s2 + 1);
	while (*s1 != '\0')
	{
		if (wildcmp(s1, s2 + 1))
			return 1;
		s1++;
	}
	return wildcmp(s1, s2 + 1);
}
if (*s1 == *s2)
	return wildcmp(s1 + 1, s2 + 1);
return (0);
}
