#include "main.h"
/**
 * _strchr - locates character in string
 * @s: string to locate char
 * @c: character to find
 * Return: character value
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (*s == c)
	{
		return (s);
	}

	return (0);
}
