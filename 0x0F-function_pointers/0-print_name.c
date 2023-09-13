#include <stdio.h>
#include "function_pointers.h"

/**
  * print_name - prints a name
  * @name: the name being printed
  * @f: the function being used for printing
  */

void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
	f(name);
}
