#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program
 *
 * Description: This function prints the name of the file it was compiled from.
 * It uses the __FILE__ macro to retrieve the file name.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
