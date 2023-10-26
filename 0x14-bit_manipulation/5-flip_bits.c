#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: An integer.
 * @m: An integer to flip @n to.
 *
 * Return: The number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int xor, num_bits;

	xor = n ^ m;
	num_bits = 0;

	while (xor > 0)
	{
		bits++;
		xor &= (xor - 1);
	}
	return (num_bits);
}
