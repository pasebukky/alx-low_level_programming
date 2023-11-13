#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: Input string
 *
 * Return: Integer value
 */

int _atoi(char *s)
{
int sign = 1;
int result = 0;
int digit;

if (*s == '-')
{
	sign = -1;
	s++;
}
else if (*s == '+')
{
	s++;
}

while (*s != '\0')
{
	if (*s >= '0' && *s <= '9')
	{
		digit = *s - '0';
		result = result * 10 + digit;
	}
	else
	{
		break;
	}
	s++;
}
return (result * sign);
}
