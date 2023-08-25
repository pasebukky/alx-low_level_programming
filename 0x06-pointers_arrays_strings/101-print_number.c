#include "main.h"

/**
 * print_number - Prints an integer
 * @n: Integer to be printed
 */

void print_number(int n)
{
if (n == 0)
{
	_putchar('0');
	return;
}
else if (n < 0)
{
	_putchar('-');
	n = -n;
}

int p = 1;

while (n / p >= 10)
p *= 10;

while (p != 0)
{
	_putchar((n / p) + '0');
	n %= p;
	p /= 10;
}
}
