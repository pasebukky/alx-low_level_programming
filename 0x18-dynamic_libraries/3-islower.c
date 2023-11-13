#include "main.h"

/**
 * _islower - Verifies that a character is a lowercase alphabet
 * @c: Character being checked
 *
 * Return: 1 for lowercase alphabets, 0 otherwise
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
	return (1);
else
	return (0);
}
