#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: First string to be compared
 * @s2: Second string to be compared
 *
 * Return: 0 if strings are equal, -ve if s1 is
 * less than s2 and +ve if s1 is greater than s2
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0' && *s1 == *s2)
{
	s1++;
	s2++;
}
return (*s1 - *s2);
}

