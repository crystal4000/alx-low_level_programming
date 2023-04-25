#include "main.h"
#include "6-abs.c"
#include <stdio.h>

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
	for (i = n; i <= 98; i++)
	{
		printf("%d", i);

		if (i != 98)
		{
		       	putchar(',');
			putchar(' ');
		}
	}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
}
