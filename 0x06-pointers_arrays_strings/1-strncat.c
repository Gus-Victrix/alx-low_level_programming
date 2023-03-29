#include "main.h"

/**
 * _strncat - Adds at most n bytes of src string to dest string.
 *
 * @n: Number of bytes of second string to add to first string.
 * @src: String to be appended to dest.
 * @dest: String to which src is appended.
 *
 * Return: Pointer to destination string.
 */

char *_strncat(char *dest, char *src, int n)
{
	// Mark end of dest.
	// Add first n characters of src to end of dest or until null is encountered.
	// Add null at end.
	char *mark = dest;

	while (*mark != 0)
		mark++;

	while (n && *src)
	{
		*mark = *src;
		n--, mark++, src++;
	}
	*mark = 0;

	return (dest);
}
