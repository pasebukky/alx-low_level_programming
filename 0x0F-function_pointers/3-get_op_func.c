#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - Chooses the exact function to perform on the operation.
 * @s: Operator passed as an argument to the program
 *
 * Return: Pointer to the function that corresponds to the operator
 * 0therwise NULL if there is no match
 */

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
	{"+", &op_add},
	{"-", &op_sub},
	{"*", &op_mul},
	{"/", &op_div},
	{"%", &op_mod},
	{NULL, NULL}
};
int i;

i = 0;
while (ops[i].op)
{
	if (strcmp(s, ops[i].op) == 0)
	{
		return (ops[i].f);
	}
	i++;
}
return (NULL);
}
