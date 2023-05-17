#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: The argument count.
 * @av: The argument vector.
 *
 * Return: Pointer to the concatenated string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len = 0, index = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}

	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, index++)
			str[index] = av[i][j];
		str[index] = '\n';
		index++;
	}

	str[index] = '\0';

	return (str);
}

