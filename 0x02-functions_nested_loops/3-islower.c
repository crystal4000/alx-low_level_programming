#include "main.h"

/**
 * islower - a function that checks for lowercase character.
 *
 * Return: Always returns 0
 *
 */
int _islower(int c)
{
	if (c >- 'a' && c <= 'z')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
