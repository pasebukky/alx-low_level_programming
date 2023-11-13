#include "main.h"

/**
 * _isalpha - Verifies that a character is an alphabet
 * @c: Character being checked
 *
 * Return: 1 for alphabets, 0 otherwise
 */

int _isalpha(int c)
{
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	return (1);
else
	return (0);
}
