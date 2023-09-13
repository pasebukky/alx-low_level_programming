#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - Returns the sum of @a and @b.
 * @a: First integer
 * @b: Second integer
 *
 * Return: result
 */

int op_add(int a, int b)
{
int result;

result = a + b;
return (result);
}

/**
 * op_sub - Returns the difference in value between @a and @b
 * @a: First integer
 * @b: Second integer
 *
 * Return: result
 */

int op_sub(int a, int b)
{
int result;

result = a - b;
return (result);
}

/**
 * op_mul - Returns the product of @a and @b
 * @a: First integer
 * @b: Second integer
 *
 * Return: result
 */

int op_mul(int a, int b)
{
int result;

result = a * b;
return (result);
}

/**
 * op_div - Returns the division of @a by @b without the remainder
 * @a: The first integer
 * @b: The second integer
 *
 * Return: result
 */

int op_div(int a, int b)
{
int result;

if (b == 0)
{
	printf("Error\n");
	exit(100);
}
result = a / b;
return (result);
}

/**
 * op_mod - Returns the remainder value of the division of @a by @b
 * @a: First integer
 * @b: Second integer
 *
 * Return: result
 */

int op_mod(int a, int b)
{
int result;

if (b == 0)
{
	printf("Error\n");
	exit(100);
}
result = a % b;
return (result);
}
