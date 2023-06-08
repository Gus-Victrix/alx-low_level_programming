#include "main.h"

/**
 * _strlen_recursion - Returns length of a string.
 *
 * @s: String to be measured.
 *
 * Return: Length of string.
 */

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * palindrome - Checks if input is a palindrome.
 *
 * @start: Input string start.
 * @end: Input string end.
 *
 * Return: 1 if palindrome, 0 otherwise.
 */

int palindrome(char *end, char *start)
{
	if (start >= end)
		return (1);
	if (*start == *end)
		return (palindrome(end - 1, start + 1));
	else
		return (0);
}

/**
 * is_palindrome - Checks if string is a palindrome.
 *
 * @s: Input string.
 *
 * Return: 1 if palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	if (!s)
		return (0);
	if (!*s)
		return (1);

	return (palindrome(s + _strlen_recursion(char *s), s));
}
