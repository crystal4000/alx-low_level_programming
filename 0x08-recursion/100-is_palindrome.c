#include "main.h"
/**
 * palindrome_helper - Helper function to check if a string is a palindrome.
 * @s: The string to check.
 * @start: The starting index of the substring to check.
 * @end: The ending index of the substring to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (palindrome_helper(s, start + 1, end - 1));
}
/**
 * _strlen - Returns the length of a string.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen(s + 1));
}
/**
 * is_palindrome - Checks if a string is a palindrome using recursion.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (palindrome_helper(s, 0, len - 1));
}
