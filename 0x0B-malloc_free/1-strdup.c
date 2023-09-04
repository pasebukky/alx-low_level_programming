#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplicates a string
 * @str: Duplicated string
 *
 * Return: Pointer to duplicate string. NULL if it fails
 */

char *_strdup(char *str)
{
unsigned int length;
char *dup_string;

if (str == NULL)
	return (NULL);

length = strlen(str);
dup_string = malloc((length + 1) * sizeof(char));

if (dup_string == NULL)
	return (NULL);

strcpy(dup_string, str);

return (dup_string);
}
