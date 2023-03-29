#include "main.h"

/**
 * string_toupper - Changes the input string characters to uppercase.
 *
 * @c: String to be made uppercase.
 *
 * Return: Pointer to uppercase string.
 */

char *string_toupper(char *c)
{
	char *mark = c;

	while (*mark)
	{
		if (*mark >= 97 && *mark <= 122)
			*mark -= 32;
		*mark++;
	}

	return (c);
}
