#include "main.h"

/**
 * _strlen_recursion - Returns the length of input string.
 *
 * @s: Input string.
 *
 * Return: Length of input string, 0 if error encountered.
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s)
		s++, i++;

	return (i);
}
