#include "main.h"
#include <stdio.h>

/**
 * print_arguments - Prints all the arguments received.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Return: None.
 */
void print_arguments(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
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
	int i;

	(void)argc; /* Unused variable */

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
