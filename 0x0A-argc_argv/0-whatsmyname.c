#include "main.h"
#include <stdio.h>

#define UNUSED(x) (void)(x)

/**
 * main - Entry point of the program
 * @argc: The number of command line arguments
 * @argv: An array of strings containing the command line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
    __attribute__((unused)) int unused_variable;
    (void)argc;
    (void)argv;

    printf("%s\n", argv[0]);

    return 0;
}
