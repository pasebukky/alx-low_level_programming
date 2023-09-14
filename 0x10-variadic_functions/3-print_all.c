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
int a;
char *string, *separator;

separator = "";
a = 0;

va_start(args, format);

if (format)
{
	while (format[a])
	{
		switch (format[a])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				string = va_arg(args, char *);
				if (!string)
					string = "(nil)";
				printf("%s%s", separator, string);
				break;
			default:
				a++;
				continue;
		}
		separator = ", ";
		a++;
	}
}
printf("\n");
va_end(args);
}
