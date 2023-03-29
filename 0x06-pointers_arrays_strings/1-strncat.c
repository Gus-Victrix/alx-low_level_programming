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
	char *mark = dest;
	int i = 0;

	/*Marking end of dest string.*/
	while (*mark != 0)
		mark++;

	/*Appending first n before null is reached.*/
	while (n && *(src + i))
	{
		*mark = *(src + i);
		n--, mark++, i++;
	}
	*mark = 0;

	return (dest);
}
