#include "main.h"
#include "2-strlen.c"
/**
 * _strcpy - main function to copy
 *
 * @dest: destination to copy
 * @src: src
 *
 * Return: a character value
 */
char *_strcpy(char *dest, char *src)
{
	int length = _strlen(src);
	int i;

	for (i = 0; i <= length; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
