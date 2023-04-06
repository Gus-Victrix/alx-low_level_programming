#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome or not.
 *
 * @s: String to be checked.
 *
 * Return: 1 if palindrome, 0 if otherwise.
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (palindrome_check(s, s + (len - 1)));
}

/**
 * _strlen_recursion - Calculates length of input string.
 *
 * @s: Input string to be measured.
 *
 * Return: Length of input string.
 */

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * palindrome_check - Checks if string is palindrome or not.
 *
 * @start: Pointer to start of string.
 * @end: Pointer to end of string.
 *
 * Return: 1 if string is a palindrome, 0 otherwise.
 */

int palindrome_check(char *start, char *end)
{
	if (start >= end)
		return (1);

	if (*start != *end)
		return (0);

	return (palindrome_check(start + 1, end - 1));
}
