#include "main.h"
#include <string.h>

/**
 * leet - Encodes a string into "1337"
 * @str: Input string.
 *
 * Return: Modified string pointer
 */

char *leet(char *str)
{
char *a = str;
char leetLegend[] = "4433007711";
char leetIcons[] = "aAeEoOtTlL";
char *charFound;
int b;

for (; *a != '\0'; a++)
{
	*charFound = strchr(leetIcons, *a);
	if (charFound != NULL)
	{
		b = charFound - leetIcons;
		*a = leetLegend[b];
	}
}
return (str);
}
