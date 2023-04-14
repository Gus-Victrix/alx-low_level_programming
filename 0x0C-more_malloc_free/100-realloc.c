#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Resizes a given memory block in the heap.
 *
 * @ptr: Pointer to input memory block.
 * @old_size: Size in bytes of the initial memory block pointed to by ptr.
 * @new_size: Size in bytes of the newly allocated memory block.
 *
 * Description: The function may be used as any of malloc, calloc or free. It
 *				does not initialize the unused memory of the block though.
 *
 * Return: Pointer to resized memory block, Null if new_size = 0 while ptr != 0
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int lesser;
	void *new_block = 0;

	if (!new_size && ptr)
		free(ptr);
	new_block = malloc(new_size);
	if (!new_block)
		return (0);

	lesser = (int) (new_size >= old_size ? old_size : new_size);
	if (ptr)
	{
		for (; lesser >= 0; lesser--)
			*((char *)new_block + lesser) = *((char *)ptr + lesser);

		free(ptr);
	}

	return (new_block);
}
