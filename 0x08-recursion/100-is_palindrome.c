#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The input string.
 *
 * Return: 1 if the string is a palindrome, otherwise 0
 */

int is_palindrome(char *s)
{
int len = strlen(s);
return (confirm_palindrome(s, 0, len - 1));
}

/**
 * confirm_palindrome - Confirms that a string is a palindrome.
 * @s: Inputted string.
 * @start: Starting index.
 * @finish: Finishing index.
 *
 * Return: 1 if the string is a palindrome, otherwise 0
 */

int confirm_palindrome(char *s, int start, int finish)
{
if (start >= finish)
	return (1);
else if (s[start] != s[finish])
	return (0);
else
	return (confirm_palindrome(s, start + 1, finish - 1));
}
