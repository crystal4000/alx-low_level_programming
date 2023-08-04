/* get_endianness.c */
#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	int num = 1;
	char *endian_check = (char *)&num;

	/* If the first byte is 1, then the system is little endian */
	return (endian_check[0]);
}

