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
	char *mark = dest;
	int i = 0;

	/*Appending first n characters of src to dest or until null is reached*/
	while (*(src + i) && n - i)
	{
		*(src + i) = *mark;
		*mark = *(src + i);
		mark++, i++;
	}

	/*Appending nulls to fill n characters*/
	while (n - i)
	{
		*mark = 0;
		mark++, i++;
	}

	return (dest);
}
