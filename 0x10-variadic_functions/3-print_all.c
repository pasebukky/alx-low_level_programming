#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything dependent on the format
 * @format: States the format type to be printed
 * @...: Number of arguments being printed
 */

void print_all(const char * const format, ...)
{
va_list args;
char *separator;
int a;

separator = "";
a = 0;

va_start(args, format);

while (format && format[a])
{
	if (format[a] == 'c')
		printf("%s%c", separator, va_arg(args, int));
	else if (format[a] == 'i')
		printf("%s%d", separator, va_arg(args, int));
	else if (format[a] == 'f')
		printf("%s%f", separator, va_arg(args, double));
	else if (format[a] == 's')
	{
		char *string;

		string = va_arg(args, char *);

		if (string == NULL)
			printf("%s(nil)", separator);
		else
			printf("%s%s", separator, string);
	}

	separator = ", ";
	a++;
}

printf("\n");
va_end(args);
}
