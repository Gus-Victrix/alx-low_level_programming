#include "main.h"

/**
 * _strchr - returns pointer to first occurence of character c in string s.
 *
 * @s: String to be searched.
 * @c: Character to be searched for.
 *
 * Return: Pointer to first occurence of character c; NULL otherwise.
 */

char *_strchr(char *s, char c)
{
	char *address = s;

	while (*address && *address != c)
		address++;
	if (!*address)
		address = 0;

	return (address);
}
