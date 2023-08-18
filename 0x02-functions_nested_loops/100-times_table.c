#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The times table to be printed.
 */
void print_times_table(int n)
{
	int i;
	int j;
	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int result = i * j;

			if (j == 0)
				_putchar('0');
			else
			{
				_putchar(' ');
				if (result < 10)
					_putchar(' ');
				else if (result < 100)
					_putchar(' ');

				_putchar(result / 100 + '0');
				_putchar((result / 10) % 10 + '0');
				_putchar(result % 10 + '0');
			}

			if (j < n)
				_putchar(',');
		}
		_putchar('\n');
	}
}

