#include "main.h"
/**
 * string_toupper - uppers a lower
 * @s: character to make upper
 * Return: return value of upper
 */
char *string_toupper(char *str)
{
	/* Create pointer to the oringal string */
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			/* Convert lowercase to uppercase */
			*ptr = *ptr - 'a' + 'A';
		}
		ptr++;
	}
	return (str);
}
