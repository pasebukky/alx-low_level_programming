#include "main.h"

/**
 * print_to_98 - Prints natural numbers from n to 98
 * @n: The first number
 */
void print_to_98(int n)
{
	int step = (n <= 98) ? 1 : -1;
	
	while (n != 98)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
		_putchar(',');
		_putchar(' ');
		
		n += step;
	}
	
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
