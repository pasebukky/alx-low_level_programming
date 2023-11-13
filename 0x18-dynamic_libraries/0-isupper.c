#include "main.h"

/**
 * _isupper - Verifies if a character is an uppercase alphabet
 * @c: Character being checked
 *
 * Return: 1 for uppercase alphabets, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
