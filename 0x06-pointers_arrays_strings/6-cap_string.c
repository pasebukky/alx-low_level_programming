#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * cap_string - Capitalizes every word in a string
 * @str: Input string
 *
 * Return: Modified string pointer
 */

char *cap_string(char *str)
{
char *ptr = str;
int q;

for (q = 0; ptr[q] != '\0'; q++)
{
	if (ptr[q] == ' ' || ptr[q] == '\t' || ptr[q] == '\n' ||
	    ptr[q] == ',' || ptr[q] == ';' || ptr[q] == '.' ||
	    ptr[q] == '!' || ptr[q] == '?' || ptr[q] == '"' ||
	    ptr[q] == '(' || ptr[q] == ')' || ptr[q] == '{' ||
	    ptr[q] == '}')
	{
		if (ptr[q + 1] >= 'a' && ptr[q + 1] <= 'z')
		{
			ptr[q + 1] = ptr[q + 1] - ('a' - 'A');
		}
	}
}
	if (ptr[0] != '\0' && ptr[0] >= 'a' && ptr[0] <= 'z')
	{
		ptr[0] = ptr[0] - ('a' - 'A');
	}
return (str);
}
