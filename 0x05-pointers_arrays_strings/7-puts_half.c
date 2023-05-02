#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - puts half of int
 *
 * @str: string to split
 */
void puts_half(char *str)
{
	int length = _strlen(str);
	int start_index = 0;
	int i;

	if (length % 2 != 0)
	{
		start_index += 1;
	}

	for (i = (length + start_index) / 2; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
