#include "main.h"

/**
 * binary_to_uint - Convert a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars
 *
 * Return: Converted number, or 0 if there is
 * one or more chars in the string b
 * that is not 0 or 1 or if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int total;

total = 0;

if (b == NULL)
	return (0);

while (*b != '\0')
{
	if (*b != '0' && *b != '1')
	{
		return (0);
	}
	else
	{
		total = (total << 1);
		total += (*b - '0');
		b++;
	}
}
return (total);
}
