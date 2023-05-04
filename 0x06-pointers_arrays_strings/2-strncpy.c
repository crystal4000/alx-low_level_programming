#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination to copy
 * @src: source to copy
 * @n: amount of places to copy
 * Return: value of dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	/* Store original destination pointer*/
	char *originalDest = dest;

	/* Copy at most n chars from source strong to the dest. string */
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	/* If there are reaining char to fill in dest, pad with null */
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	/*Return pointer to the resulting string*/
	return (originalDest);
}
