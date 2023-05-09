#include "main.h"
/**
 * _strstr - finds the first occurrence of a substring in a string
 * @haystack: pointer to the string to search in
 * @needle: pointer to the substring to search for
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

		while (*n == *h && *n != '\0')
		{
			n++;
			h++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
