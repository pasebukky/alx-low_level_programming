#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: pointer to the unsigned long integer whose bit is to be cleared
 * @index: The index starting from 0 of the
 * bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 *
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int bit_num;

bit_num = 8 * sizeof(unsigned long int);

if (index >= bit_num)
	return (-1);

bit_num = 1UL << index;

*n = *n & (~bit_num);

return (1);
}
