#include "main.h"
/**
 * _strcat - concats two arrays
 *
 * @dest: destination of concat
 * @src: source array to concat
 *
 * Return: char value
 */
char *_strcat(char *dest, char *src)
{
	/* Store the original destination pointer */
	char *originalDest = dest;

	/* Move the destination pointer to the end of the string */
	while (*dest != '\0')
	{
		dest++;
	}

	/* Copy the Source string to the end of the destivation string */
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	/* Add terninating null byte */
	*dest = '\0';

	/* Return the pointer to the resulting string */
	return (originalDest);
}
