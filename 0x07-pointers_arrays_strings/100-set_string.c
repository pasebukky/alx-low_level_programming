#include "main.h"
#include <stdio.h>

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Pointer to the set pointer.
 * @to: character pointer.
 */

void set_string(char **s, char *to)
{
	*s = to;
}

