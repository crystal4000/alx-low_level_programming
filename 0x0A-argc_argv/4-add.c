#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_positive_numbers - Adds positive numbers.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Return: The result of adding the positive numbers,
 *	or 0 if no number is passed,
 *	or 1 if there is an error.
 */
int add_positive_numbers(int argc, char *argv[])
{
	int i, num, sum = 0;

	if (argc == 1)
		return (0);

	for (i = 1; i < argc; i++)
	{
		int j = 0;

		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
				return (1);
			j++;
		}

		num = atoi(argv[i]);
		if (num > 0)
			sum += num;
	}

	return (sum);
}

/**
 * main - Entry point of the program.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	int result = add_positive_numbers(argc, argv);

	if (result == 1)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", result);

	return (0);
}
