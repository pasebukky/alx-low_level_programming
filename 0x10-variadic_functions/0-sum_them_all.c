#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: Number of parameters.
 *
 * Return: Sum of parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int a;
int sum = 0;
int parameter;

if (n == 0)
	return (0);

va_start(args, n);

for (a = 0; a < n; a++)
{
	parameter = va_arg(args, int);
	sum += parameter;
}

va_end(args);

return (sum);
}
