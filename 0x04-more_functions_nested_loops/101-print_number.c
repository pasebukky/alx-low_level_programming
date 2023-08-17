#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	int divisor = 1;
	int is_negative = 0;

	if (n < 0)
	{
		is_negative = 1;
		_putchar('-');
		n = -n;
	}

	int temp = n;
	while (temp > 9)
	{
		temp /= 10;
		divisor *= 10;
	}

	while (divisor > 0)
	{
		int digit = n / divisor;
		_putchar(digit + '0');
		n %= divisor;
		divisor /= 10;
	}
}

