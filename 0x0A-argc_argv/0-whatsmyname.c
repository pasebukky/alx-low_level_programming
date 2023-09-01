#include "main.h"
#include <stdio.h>

/**
 * main - prints the program name
 * @argv: array of arguments
 * @argc: number of arguments
 *
 * Return: 0 
 */

int main(int argc, char *argv[]) 
{
    if (argc > 0) 
    {
        char *prog_name = argv[0];
        while (*prog_name != '\0') 
        {
            _putchar(*prog_name);
            prog_name++;
        }
        _putchar('\n');
    }
    return (0);
}

