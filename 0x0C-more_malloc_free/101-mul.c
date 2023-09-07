#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * is_positive_number - Confirms a postitive number within a string
 * @str: Input string being checked
 *
 * Return: 1 if the string contains a positive number, otherwise return 0.
 */

int is_positive_number(const char *str)
{
while (*str)
{
	if (!isdigit(*str))
	{
		return (0);
	}
	str++;
}
return (1);
}



/**
 * print_error - Prints "Error" followed by a new line
 */

void print_error(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
}



/**
 * main - Entry point
 * @argc: Number of arguments.
 * @argv: Array of argument strings.
 *
 * Return: 0 on success and 98 on error.
 */

int main(int argc, char *argv[])
{
char *num1_str;
char *num2_str;
int length_a, length_b, max_length, start, a, b, i;
int *result;

if (argc != 3)
{
	print_error();
	return (98);
}

num1_str = argv[1];
num2_str = argv[2];
length_a = strlen(num1_str);
length_b = strlen(num2_str);

if (length_a == 0 || length_b == 0)
{
	_putchar('0');
	_putchar('\n');
	return (0);
}

max_length = length_a + length_b;
result = calloc(max_length, sizeof(int));

if (result == NULL)
{
	print_error();
	return (98);
}

for (a = length_a - 1; a >= 0; a--)
{
	for (b = length_b - 1; b >= 0; b--)
	{
		int mul = (num1_str[a] - '0') * (num2_str[b] - '0');
		int sum = mul + result[a + b + 1];

		result[a + b] += sum / 10;
		result[a + b + 1] = sum % 10;
	}
}

start = 0;
for (i = 0; i < max_length; i++)
{
	if (result[i] != 0 || start)
	{
		_putchar(result[i] + '0');
		start = 1;
	}
}
_putchar('\n');
free(result);
return (0);
}
