#include <stdio.h>
/**
 * main - main function
 *
 * Return: nothing
 */
int main(void)
{
	int i, current, previous, temp;

	current = 2;
	previous = 1;
	printf("%d, %d", previous, current);
	for (i = 3; i <= 98; i++)
	{
		temp = current;
		current = current + previous;
		previous = temp;
		printf(", %d", current);
	}
	printf("\n");
	return (0);
}
