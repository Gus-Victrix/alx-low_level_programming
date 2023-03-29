#include "main.h"

/**
 * _strncpy - Copies the first n bytes of src into buffer pointed to by dest.
 *
 * @src: String to be copied to buffer.
 * @dest: Destination buffer.
 * @n: Number of bytes of src string to be copied.
 *
 * Return: Pointer to destination buffer.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i]; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = 0;
	return (dest);
}
