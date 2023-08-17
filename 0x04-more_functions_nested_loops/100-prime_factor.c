#include <stdio.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a given number.
 * main - Entry point.
 * 
 * @n: The number for which to find the largest prime factor.
 * Return: The largest prime factor of n.
 */
long largest_prime_factor(long n)
{
	long factor = 2;

	while (n > 1)
	{
		if (n % factor == 0)
		{
			n /= factor;
		}
		else
		{
			factor++;
		}
	}

	return (factor);
}

/**
 * main - Entry point of the program.
 * Return: 0 on successful completion.
 */
int main(void)
{
	long number = 612852475143;
	long largest_factor = largest_prime_factor(number);

	if (largest_factor == 0)
	{
		putchar('0');
	}
	else
	{
		long temp = largest_factor;
		long reversed = 0;

		while (temp > 0)
		{
			int digit = temp % 10;
			reversed = reversed * 10 + digit;
			temp /= 10;
		}

		while (reversed > 0)
		{
			int digit = reversed % 10;
			putchar(digit + '0');
			reversed /= 10;
		}
	}

	putchar('\n');
	return (0);
}
