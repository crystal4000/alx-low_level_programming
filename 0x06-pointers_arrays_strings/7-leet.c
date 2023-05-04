#include "main.h"
/**
 * leet - leet
 * @s: string
 *
 * Return: char value
 */
char *leet(char *str)
{
	/*Pointer to the oringinal string*/
	char *ptr = str;

	while (*ptr != '\0')
	{
		/*varibale to store encoded character */
		int encode = 0;

		/*Check if current character is 'a' or 'A' */
		if (*ptr == 'a' || *ptr == 'A')
		{
			encode = '4';
		}

		/*Check if current character is 'e' or 'E' */
		else if (*ptr == 'e' || *ptr == 'E')
		{
			encode = '3';
		}

		/*Check if current character is 'o' or 'O' */
		else if (*ptr == 'o' || *ptr == 'O')
		{
			encode = '0';
		}

		/*Check if current chrarcter is 't' or 'T'*/
		else if (*ptr == 't' || *ptr == 'T')
		{
			encode = '7';
		}

		/*Check if current character is 'l' or 'L' */
		else if (*ptr == 'l' || *ptr == 'L')
		{
			encode = '7';
		}

		/*If current cjaracter matches any encoding, replace it*/
		if (encode != 0)
		{
			*ptr = encode;
		}
		ptr++;
	}
	return (str);
}
