#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Prints the opcodes of its own main function
 * @fun: Pointer to the function whose opcodes are being printed
 * @byte_num: Number of bytes being printed
 */

void print_opcodes(void (*fun)(void), int byte_num)
{
int a;
unsigned char *opcodes = (unsigned char *)fun;

for (a = 0; a < byte_num; a++)
{
	printf("%02x", opcodes[a]);

	if (a < byte_num - 1)
		printf(" ");
	else
		printf("\n");
}
}

/**
 * main - Entry point
 * @argc: Number of command line arguments
 * @argv: Array of strings with the command line arguments
 *
 * Return: 0 on success. Othrwise Error.
 */

int main(int argc, char *argv[])
{
int num_of_bytes;

if (argc != 2)
{
	printf("Error\n");
	return (1);
}

num_of_bytes = atoi(argv[1]);

if (num_of_bytes < 0)
{
	printf("Error\n");
	return (2);
}

void (*main_func)(void) = (void (*)(void))main;
print_opcodes(main_func, num_of_bytes);

return (0);
}
