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
	int i = 0;

	while (*mark != 0)
		mark++;

	while (*(src + i))
	{
		*mark = *(src + i);
		i++, mark++;
	}
	*mark = 0;

	return (dest);
}
