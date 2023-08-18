#include "main.h"

/**
 * print_number - Prints an integer using _putchar.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	int divisor = 1;
	int temp;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	temp = n;

	while (temp > 9)
	{
		temp /= 10;
		divisor *= 10;
	}

	while (divisor > 0)
	{
		int digit = n / divisor + '0';
		_putchar(digit);
		n %= divisor;
		divisor /= 10;
	}
}

