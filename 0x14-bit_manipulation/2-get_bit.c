#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The unsigned long integer to extract the bit from.
 * @index: The index of the bit to retrieve
 * (starting from 0).
 *
 * Return: The value of the bit at the specified
 * index (0 or 1) or -1 if an error occurred.
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
unsigned int bit_num;
int bit_value;

bit_num = 8 * sizeof(unsigned long int);

if (index >= bit_num)
	return (-1);

bit_num = n >> index;

bit_value = bit_num & 1;

return (bit_value);
}
