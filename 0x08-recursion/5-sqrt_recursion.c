#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: Inputted number.
 *
 * Return: Natural square root of n if it has one
 * otherwise -1 if n does not have one
 */

int _sqrt_recursion(int n)
{
if (n < 0)
	return (-1);
else
	return (find_sqrt(n, 1));
}

/**
 * find_sqrt - finds the square root using linear search.
 * @n: Inputted number.
 * @m: Current value to check square roots
 *
 * Return: Natural square root of n if it has one
 * otherwise -1 if n does not have one
 */

int find_sqrt(int n, int m)
{
if (m * m > n)
	return (-1);
else if (m * m == n)
	return (m);
else
	return (find_sqrt(n, m + 1));
}
