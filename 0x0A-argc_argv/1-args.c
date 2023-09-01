#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of program arguments
 * @argv: array of arguments
 * @argc: number of arguments
 *
 * Return: 0 
 */

int main(int argc, char *argv[])
{
    (void) argv; 
    int count;
   
    count = argc - 1;

    while (count > 0) 
    {
        _putchar('0' + count % 10);
        count /= 10;
    }
    _putchar('\n');
    return 0;
}
