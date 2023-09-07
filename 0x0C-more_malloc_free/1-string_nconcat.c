#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 * @n: Maximum number of bytes from s2 to concatenate.
 *
 * Return: Pointer to concatenated string.
 * Return NULL if memory allocation fails or NULL is passed
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int length_a, length_b;
char *result;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";

length_a = strlen(s1);
length_b = strlen(s2);

if (n >= length_b)
	n = length_b;

result = malloc(sizeof(char) * (length_a + n + 1));

if (result == NULL)
	return (NULL);

strcpy(result, s1);
strncat(result, s2, n);

return (result);
}
