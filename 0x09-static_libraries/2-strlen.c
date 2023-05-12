#include "main.h"
/**
 * _strlen - gets character string
 *
 * @s: character to getstring
 * Return: returns length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
