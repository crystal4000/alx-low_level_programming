#include <stdio.h>
/**
 * main - main function
 *
 * Return: nothing
 */
int main(void)
{
	int sum = 0;
	int a = 1;
	int b = 2;
	int c;

	while (b <= 4000000)
	{
		if (b % 2 == 0)
		{
			sum += b;
		}

		c = a + b;
		a = b;
		b = c;
	}
	printf("%d\n", sum);
	return (0);
}
