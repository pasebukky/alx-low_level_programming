#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string to be converted.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
int result = 0;
int sign = 1;

while (*s)
{
	if (*s == '-')
		sign = -sign;
	else if (*s >= '0' && *s <= '9')
	{
		if (result > INT_MAX / 10 ||
		(result == INT_MAX / 10 && (*s - '0') > INT_MAX % 10))
		{
			return (sign == 1 ? INT_MAX : INT_MIN);
		}
		result = result * 10 + (*s - '0');
	}
	else if (result != 0)
	{
		break; /* End loop if non-digit after digits */
	}
	s++;
}
return (result * sign);
}
