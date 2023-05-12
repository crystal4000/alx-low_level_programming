#include "main.h"
#include <stdio.h>
/**
 * _strspn - length of prefix substring
 * @s: string to go through
 * @accept: accepted bytes
 * Return: returns usigned values
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (accept[j] == '\0')
		{
			return (i);
		}
	}
	return (i);
}
