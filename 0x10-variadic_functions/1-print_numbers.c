#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: String printed between numbers
 * @n: Number of integers sent through the function.
 * @...: Integers being printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int a;
int num;

va_start(args, n);

for (a = 0; a < n; a++)
{
	num = va_arg(args, int);
	printf("%d", num);
	if (a < n - 1 && separator)
		printf("%s", separator);
}

va_end(args);

printf("\n");
}
