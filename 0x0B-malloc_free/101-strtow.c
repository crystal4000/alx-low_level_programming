#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to count words from.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
	int count = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		while (str[i] == ' ')
			i++;

		if (str[i] != '\0')
		{
			count++;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
		}
	}

	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 *
 * Return: Pointer to an array of strings (words), or NULL if it fails.
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, word_count, word_len;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);
	words = malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
		return (NULL);

	i = 0;
	k = 0;

	while (str[i] != '\0')
	{
		while (str[i] == ' ')
			i++;

		if (str[i] != '\0')
		{
			word_len = 0;
			j = i;
			while (str[j] != ' ' && str[j] != '\0')
			{
				word_len++;
				j++;
			}

			words[k] = malloc(sizeof(char) * (word_len + 1));
			if (words[k] == NULL)
			{
				for (j = 0; j < k; j++)
					free(words[j]);
				free(words);
				return (NULL);
			}

			for (j = 0; j < word_len; j++, i++)
				words[k][j] = str[i];
			words[k][j] = '\0';
			k++;
		}
	}

	words[k] = NULL;
	return (words);
}
