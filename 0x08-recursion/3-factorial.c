#include "main.h"
#include <stdio.h>

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number whose factorial is being calculated.
 *
 * Return: -1 if n is less than 0. If n is 0 or 1, return 1
 * otherwise the factorial of n
 */

int factorial(int n)
{
if (n < 0)
	return (-1);
else if (n == 0 || n == 1)
	return (1);
else
	return (n * factorial(n - 1));
}
