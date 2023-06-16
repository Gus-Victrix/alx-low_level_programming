#include "main.h"
#include <stdlib.h>

char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: Value to reallocate
 * @old_size: Old_size memory
 * @new_size: New size of memory
 *
 * Return: 0 if probleme, the new pointer to the new allocated
 * memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *array;

	if (ptr == 0)
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0)
	{
		free(ptr);
		return (0);
	}

	array = malloc(new_size);
	if (array == 0)
		return (0);

	_memcpy(array, ptr, old_size);
	free(ptr);

	return (array);
}

/**
 * _memcpy - copies memory area.
 *
 * @dest: Destination sting
 * @src: Source string to copies into dest
 * @n: Number of byte to copie
 *
 * Return: Dest string.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
