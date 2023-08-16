#include "main.h"
#include <limits.h>

/**
 * print_last_digit - Prints and returns the last digit of a number
 * @r: The number the last digit is gotten from
 * Last digit of INT_MIN is 8
 *
 * Return: The value of the last digit
 */
int print_last_digit(int r)
{
	int last;

	if (r == INT_MIN)
	{
		_putchar('0' + 8);
		return 8;
	}

	if (r < 0)
		r = -r;
       
	last = r % 10;
	_putchar('0' + last);
	
	return last;
}
