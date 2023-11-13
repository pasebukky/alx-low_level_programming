#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints the character c
 * @c: Printed character
 *
 * Return: 1 on success, -1 when there is an error
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}

