#include "main.h"
#include <stdio.h>

/**
 * print_arg_count - Prints the number of arguments passed into the program.
 * @argc: The argument count.
 *
 * Return: None.
 */
void print_arg_count(int argc)
{
	printf("%d\n", argc - 1);
}

/**
 * main - Entry point of the program.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	/* Unused parameter */
	(void)argv;
	print_arg_count(argc);
	return (0);
}
