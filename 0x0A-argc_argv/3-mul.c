#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * multiply_numbers - Multiplies two numbers.
 * @num1: The first number.
 * @num2: The second number.
 *
 * Return: The result of the multiplication.
 */
int multiply_numbers(int num1, int num2)
{
	return (num1 * num2);
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
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = multiply_numbers(num1, num2);

	printf("%d\n", result);

	return (0);
}
