#include <stdio.h>
/**
 * main - main function
 *
 * Return: nothing
 */
int main(void)
{
	float a = 1;
	float b = 2;
	int count = 2;
	float c = a + b;

	printf("%.0f, %.0f, ", a, b);
	while (count < 98)
	{
		printf("%.0f, ", c);
		a = b;
		b = c;
		count++;
	}
	printf("%.0f\n", a + b);
	return (0);
}
