#include "main.h"

/**
 * _strlen - calculates string Length
 * @s: Input string
 *
 * Return: String Length
 */

int _strlen(char *s)
{
int length = 0;

while (*s != '\0')
{
	length++;
	s++;
}
return (length);
}
