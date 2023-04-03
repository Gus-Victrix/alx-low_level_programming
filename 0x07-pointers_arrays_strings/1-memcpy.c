#include "main.h"

/**
 * _memcpy - Copies n bytes from memory area src to memory area dest.
 *
 * @n: Number of bytes from src to be copied into dest.
 * @dest: The pointer to the destination memory area.
 * @src: The source memory area.
 *
 * Return: Pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	if (dest == 0)
		return (dest);

	while (i < n)
	{
		
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
