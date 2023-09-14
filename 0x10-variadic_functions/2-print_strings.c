#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: String being printed in between strings
 * @n: Number of strings sent through the function
 * @...: Strings being printed.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int s;

va_start(args, n);

for (s = 0; s < n; s++)
{
	char *string = va_arg(args, char *);

	if (string)
		printf("%s", string);
	else
		printf("(nil)");

	if (s < n - 1 && separator)
		printf("%s", separator);
}

va_end(args);

printf("\n");
}
