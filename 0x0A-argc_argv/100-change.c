#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * calc_min_coins - Calculates the minimum number of coins.
 * @cents: The amount in cents to make change for.
 *
 * Return: The minimum number of coins needed.
 */

int calc_min_coins(int cents)
{
int coin[] = {25, 10, 5, 2, 1};
int count_coins;
int i;
    
count_coins = 0;

for (i = 0; i < 5; i++)
{
	while (cents >= coin[i])
	{
		cents -= coin[i];
		count_coins++;
	}
}
return (count_coins);
}

/**
 * main - Entry point of the program.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: 0 on success, 1 on error.
 */

int main(int argc, char *argv[])
{
int cents;
int count_coins;
int divider;

if (argc != 2) 
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	return (1);
}

cents = atoi(argv[1]);

if (cents < 0)
{
	_putchar('0');
	_putchar('\n');
	return (0);
}

count_coins = calc_min_coins(cents);

divider = 1;

while (count_coins / divider >= 10)
{
	divider *= 10;
}

while (divider > 0) 
{
	_putchar('0' + count_coins / divider);
	count_coins %= divider;
	divider /= 10;
}
	_putchar('\n');
	return (0);
}
