#include "main.h"
/**
 * print_numbers - prints the numbers
 *
 */
void print_numbers(void)
{
	int i;
	char digit;

	for (i = 0; i <= 9; i++)
	{
		digit = i + '0';
		_putchar(digit);
	}
	_putchar('\n');
}
