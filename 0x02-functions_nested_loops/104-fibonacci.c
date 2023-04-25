#include <stdio.h>
/**
 * main - main function
 *
 * Return: nothing
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int count = 2;
	int c;

	printf("%d, %d, ", a, b);
	
	while (count < 98)
	{
		c = a + b;

		printf("%d, ", c);

		a = b;
		b = c;
		count++;
	}
	printf("%d\n", a + b);
	return (0);
}
