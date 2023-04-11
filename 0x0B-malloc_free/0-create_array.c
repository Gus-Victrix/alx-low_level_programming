#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array of chars, and initializes it with char c.
 *
 * @size: Size of character array to be returned.
 * @c: The character to be used for initialization.
 *
 * Return: NULL if size = 0. Pointer to array otherwise.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *t;

	if (!size)
		return (0);

	t = (char *)malloc(sizeof(char) * size);
	while (i < size)
		*(t + i++) = c;
	return (t);
}
