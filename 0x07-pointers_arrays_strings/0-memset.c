#include "main.h"

/**
 * _memset - Fills first n bytes of memory area pointed to by s with the
 *				constant byte b.
 *
 * @s: Buffer to be filled with constant b.
 * @b: Constant character to be added.
 * @n: Number of character b to be added to buffer s.
 *
 * Return: Pointer to buffer s after modification.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	if (s == 0)
		return (s);

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}
