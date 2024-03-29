/* flip_bits.c */
#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip to get from n to m.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/* Get the XOR of n and m */
	unsigned long int xor_result = n ^ m;

	unsigned int count = 0;

	/* Count the number of set bits in the XOR result */
	while (xor_result)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}

