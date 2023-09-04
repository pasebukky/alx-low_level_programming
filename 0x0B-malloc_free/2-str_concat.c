#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Pointer to concatenated string. NULL if it fails.
 */

char *str_concat(char *s1, char *s2)
{
unsigned int a, b;
char *conc_string;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";

a = strlen(s1);
b = strlen(s2);
conc_string = malloc((a + b + 1) * sizeof(char));

if (conc_string == NULL)
	return (NULL);

strcpy(conc_string, s1);
strcat(conc_string, s2);

return (conc_string);
}
