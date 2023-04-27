#include "main.h"
/**
 * more_numbers - prints the numbers
 *
 */
void more_numbers(void)
{
	int i, j;
	char digit;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				digit = i / 10 + '0';
				_putchar(digit);
			}
			digit = i % 10 + '0';
			_putchar(digit);
		}
		_putchar('\n');
	}
}
