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
	float c;

	printf("%.0f, %.0f, ", a, b);
	while (count < 98)
	{
		c = a + b;

		printf("%.0f, ", c);

		a = b;
		b = c;
		count++;

		if (count < 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
