#include "main.h"

/**
 * _strcat - Appends second string to first string.
 * @dest: Pointer to destination string.
 * @src: Pointer to appended string.
 * Return: Pointer to combined string.
 */

char *_strcat(char *dest, char *src)
{
	char *mark = dest;

	while (*mark != 0)
		mark++;

	while (*src != 0)
	{
		*mark = *src;
		src++;
		mark++;
	}
	*mark = 0;

	return (dest);
}
