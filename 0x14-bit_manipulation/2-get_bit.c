/* get_bit.c */
#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number from which to retrieve the bit.
 * @index: The index, starting from 0, of the bit to get.
 *
 * Return: The value of the bit at the given index, or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	/* Check if index is out of range */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	 /* Create a mask with the bit at the given index */
	mask = 1UL << index;

	/* Check if the bit is 0 */
	if ((n & mask) == 0)
		return (0);
	 /* The bit is 1 */
	else
		return (1);
}

