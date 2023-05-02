#include "main.h"
#include "2-strlen.c"
/**
 * rev_string - reverse a string value
 *
 * @s: string to print
 */

void rev_string(char *s)
{
	int length = _strlen(s);
	int start = 0;
	int end = length - 1;
	char temp;

	while (start < end)
	{
		char temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
