#include "main.h"
#include <stdio.h>

/**
 * main - prints all recieved arguments
 * @argv: array of arguments
 * @argc: number of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
	char *arg = argv[i];

	while (*arg != '\0')
	{
		_putchar(*arg);
		arg++;
	}
	_putchar('\n');
}
return (0);
}
