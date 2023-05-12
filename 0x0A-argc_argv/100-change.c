#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * min_coins_needed - Calculates the minimum num of coins to make change.
 * @cents: The amount of cents.
 *
 * Return: The minimum number of coins needed.
 */
int min_coins_needed(int cents)
{
	int coins = 0;

	if (cents <= 0)
		return (0);

	while (cents >= 25)
	{
		coins++;
		cents -= 25;
	}

	while (cents >= 10)
	{
		coins++;
		cents -= 10;
	}

	while (cents >= 5)
	{
		coins++;
		cents -= 5;
	}

	while (cents >= 2)
	{
		coins++;
		cents -= 2;
	}

	while (cents >= 1)
	{
		coins++;
		cents -= 1;
	}

	return (coins);
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
	int cents, num_coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	num_coins = min_coins_needed(cents);

	printf("%d\n", num_coins);

	return (0);
}
