#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - Checks if a number is prime
 * @n: Inputted number
 *
 * Return: 1 if the number is prime, otherwise 0
 */

int is_prime_number(int n)
{
if (n <= 1)
	return 0;
else
	return confirm_prime(n, 2);
}

/**
 * confirm_prime - Confirms if a number is prime
 * @n: Inputted number being confirmed
 * @d: Current divisor confirming divisibility.
 *
 * Return: 1 if the number is prime, otherwise 0
 */

int confirm_prime(int n, int d)
{
if (d == n)
	return 1;
else if (n % d == 0)
	return 0;
else
	return confirm_prime(n, d + 1);
}
