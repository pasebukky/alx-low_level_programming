#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix
 * @a: matrix of integers pointer
 * @size: square matrix size
 */
 
void print_diagsums(int *a, int size)
{
    int sum_diag1 = 0;
    int sum_diag2 = 0;
    int temp_index;
    char temp[20];
    int b;

    for (b = 0; b < size; b++)
    {
        sum_diag1 += a[b * size + b];
        sum_diag2 += a[b * size + (size - 1 - b)];
    }

    temp_index = 0;
    while (sum_diag1 > 0)
    {
        temp[temp_index++] = (sum_diag1 % 10) + '0';
        sum_diag1 /= 10;
    }
    for (b = temp_index - 1; b >= 0; b--)
    {
        _putchar(temp[b]);
    }
    _putchar(' ');

    temp_index = 0;
    while (sum_diag2 > 0)
    {
        temp[temp_index++] = (sum_diag2 % 10) + '0';
        sum_diag2 /= 10;
    }
    for (b = temp_index - 1; b >= 0; b--)
    {
        _putchar(temp[b]);
    }
    _putchar('\n');
}
