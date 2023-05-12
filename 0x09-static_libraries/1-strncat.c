#include "main.h"
/**
 * _strncat - concats two arrays
 *
 * @dest: destination of concat
 * @src: source array to concat
 * @n: amount of times to append
 *
 * Return: char value
 */
char *_strncat(char *dest, char *src, int n)
{
	/* Store the original destination pointer */
	 char *originalDest = dest;

	/* Move the destination pointer to the end of the string */
	while (*dest != '\0')
	{
		dest++;
	}

	 /* Copy at most n bytes from the source to end of the dest string */
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	/* Add the terminating null byte */
	*dest = '\0';

	/* Return the pointer to the resulting string */
	return (originalDest);
}
