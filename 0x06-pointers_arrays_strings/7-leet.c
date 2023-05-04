#include "main.h"
/**
 * leet - leet
 * @str: string
 *
 * Return: char value
 */
char *leet(char *str)
{
	/*Pointer to the oringinal string*/
	char *ptr = str;
	char *leetChars = "aAeEoOtTlL";
	char *leetReplacements = "4433007711";
	int i;
	int found;

	while (*ptr)
	{
		i = 0;
		found = 0;

		while (leetChars[i])
		{
			if (*ptr == leetChars[i])
			{
				*ptr = leetReplacements[i];
				found = 1;
				break;
			}
			i++;
		}

		if (!found)
		{
			ptr++;
		}
	}
	return (str);
}
