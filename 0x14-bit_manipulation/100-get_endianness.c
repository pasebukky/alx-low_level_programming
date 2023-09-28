#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 *
 */

int get_endianness(void)
{
unsigned int i;
char *ptr;

i = 1;
ptr = (char *)&i;

if (*ptr == 1)
	return (1);
else
	return (0);
}
