#include "main.h"
/**
 * leet - leet
 * @str: string
 *
 * Return: char value
 */
char *leet(char *str)
{
	char *ptr = str;
	char leetChars[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char leetReplacements[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int numLeetChars = sizeof(leetChars) / sizeof(leetChars[0]);
	int i;
	int found = 0;

	while (*ptr)
	{
		for (i = 0; i < numLeetChars; i++)
		{
			if (*ptr == leetChars[i])
			{
				*ptr = leetReplacements[i];
				found = 1;
				break;
			}
		}
		if (!found)
		{
			ptr++;
		}
	}
	return (str);
}
