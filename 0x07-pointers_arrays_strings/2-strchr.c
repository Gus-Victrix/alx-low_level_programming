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
	int steps;

	if (!s || !*s)
		return (0);

	for (steps = 0; *(s + steps); steps++)
		if (*(s + steps) == c)
			return (s + steps);
	return (0);
}
