#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: 0
 */

int main(int argc, char *argv[]) 
{
    int num1, num2, result, divider;

    if (argc != 3) 
    {
        _putchar('E');
        _putchar('r');
        _putchar('r');
        _putchar('o');
        _putchar('r');
        _putchar('\n');
        return (1);
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);

    result = num1 * num2;

    if (result < 0) 
    {
        _putchar('-');
        result = -result;
    }
    
    divider = 1;
    while (result / divider >= 10) 
    {
        divider *= 10;
    }

    while (divider > 0) 
    {
        _putchar('0' + result / divider);
        result %= divider;
        divider /= 10;
    }

    _putchar('\n');

    return (0);
}





