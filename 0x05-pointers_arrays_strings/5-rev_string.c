#include "main.h"

int _strlen(char *s);
void rev_string(char *s);

/**
 * rev_string - Reverses a string
 *
 * @s: String to be reversed.
 */

void rev_string(char *s)
{
	int length, start, temporary;

	for (start = 0, length = _strlen(s) - 1; length > start; start++, length--)
	{
		temporary = s[start];
		s[start] = s[length];
		s[length] = temporary;
	}
}

/**
 * _strlen - Returns the length of a srting input.
 * @s: String input.
 * Return: Length of string.
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
	}

	return (i);
}
