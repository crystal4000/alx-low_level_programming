#include "main.h"
/**
 * cap_string - capitalizes the string
 * @s: string
 * Return: the string capitalized
 */

char *cap_string(char *str)
{
	int isWordStart = 1;
	int i;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			isWordStart = 1;
		}
		else if (isWordStart && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 'a' + 'A';
			isWordStart = 0;
		}
		else
		{
			isWordStart = 0;
		}
	}
	return str;
}
