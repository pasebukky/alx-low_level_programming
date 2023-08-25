#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverses the elements in an array.
 * @a: Reversed array
 * @n: Number of elements within the array.
 *
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
int i, j;

for (i = 0; i < n / 2; i++)
{
	j = a[i];
	a[i] = a[n - i - 1];
	a[n - i - 1] = j;
}
}
