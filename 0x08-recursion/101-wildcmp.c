#include "main.h"
/**
 * wildcmp - Compares two strings and checks if they are identical.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: 1 if the strings are identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
		return ((*s1 == '\0'));

	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));

		if (wildcmp(s1, s2 + 1))
			return (1);

		return (wildcmp(s1 + 1, s2));
	}

	if (*s1 != *s2)
		return (0);

	return (wildcmp(s1 + 1, s2 + 1));
}
