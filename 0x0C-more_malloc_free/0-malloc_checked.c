#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory from heap.
 *
 * @b: Number of bytes to be allocated.
 *
 * Return: Returns address of allocated memory, if issues are encountered,
 *			it exits with status 98.
 */

void *malloc_checked(unsigned int b)
{
	void *address = malloc(b);

	if (!address)
		exit(98);

	return (address);
}
