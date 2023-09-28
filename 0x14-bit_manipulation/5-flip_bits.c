#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: the first integer
 * @m: the second integer
 *
 * Return: the number of bits needed to flip one
 * number to another
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int bit_num;
unsigned long int flip;

bit_num = 0;
flip = n ^ m;

for (; flip > 0; flip >>= 1)
	bit_num = bit_num + (flip & 1);

return (bit_num);
}


