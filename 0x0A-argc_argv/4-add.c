#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * confirm_digit - Confirms that a character is a digit.
 * @c: Character to be confirmed.
 *
 * Return: 1 if it is a digit, 0 otherwise.
*/

int confirm_digit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * main - Entry point of the program.
 * @argv: Arguments array.
 * @argc: Number of arguments.
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
int sum, i, j, divider;

if (argc == 1)
{
	_putchar('0');
	_putchar('\n');
	return (0);
}
sum = 0;

for (i = 1; i < argc; i++)
{
	for (j = 0; argv[i][j]; j++)
		if (!confirm_digit(argv[i][j]))
		{
			printf("Error\n");
			return (1);
		}
	sum += atoi(argv[i]);
}
if (sum < 0)
{
	_putchar('-');
	sum = -sum;
}
divider = 1;

while (sum / divider >= 10)
	divider *= 10;
while (divider > 0)
{
	_putchar('0' + sum / divider);
	sum %= divider;
	divider /= 10;
}
	_putchar('\n');
	return (0);
}
