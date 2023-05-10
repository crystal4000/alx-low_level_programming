#include "main.h"
/**
 * factorial - Calculates the factorial of a given number using recursion.
 * @n: The number to calculate the factorial of.
 *
 * Return: The factorial of the number, or -1 if there's an error.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
