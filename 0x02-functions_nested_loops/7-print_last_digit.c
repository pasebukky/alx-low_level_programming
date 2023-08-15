#include "main.h"

/**
 * print_last_digit - Prints and returns the last digit of a number
 * @r: The number the last digit is gotten from
 *
 * Return: The value of the last digit
 */
int print_last_digit(int r)
{
	int last;

	if (r < 0)
		r = -r;

	las = r % 10;
	_putchar(last + '0');

	return (last);
}

