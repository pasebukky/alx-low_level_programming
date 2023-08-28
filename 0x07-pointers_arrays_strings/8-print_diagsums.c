#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two
 * diagonals of a square matrix.
 * @a: Pointer to the matrix of integers.
 * @size: Size of the square matrix.
 */

void print_diagsums(int *a, int size)
{
int sum_diag1 = 0;
int sum_diag2 = 0;
int b;

for (b = 0; b < size; b++)
{
	sum_diag1 += a[b * size + b];
	sum_diag2 += a[b * size + (size - 1 - b)];
}
printf("%d, %d\n", sum_diag1, sum_diag2);
}
