#include "main.h"

/**
 * _isalpha - Check for lowercase characters
 * @c: The character to be checked
 *
 * Return: 1 if the character is an alphabet, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

