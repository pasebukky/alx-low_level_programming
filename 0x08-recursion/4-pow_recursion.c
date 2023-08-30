#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: Base number.
 * @y: Exponent.
 *
 * Return: The result of x raised to the power of y
 * otherwise if y is less than 0, return -1
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
	return (-1);
else if (y == 0)
	return (1);
else
	return (x * _pow_recursion(x, y - 1));
}