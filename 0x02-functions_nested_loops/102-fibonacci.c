#include <stdio.h>
/**
 * main - main function
 *
 * Return: nothing
 */
int main(void)
{
	long int i;
	long int a = 1;
	long int b = 2;
	long int c;

	printf("%ld, %ld ", a, b);
	
	for (i = 2; i < 50; i++)
	{
		c = a + b;

		printf("%ld", c);

		if (i < 49)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}

		a = b;
		b= c;
	}
	return (0);
}
