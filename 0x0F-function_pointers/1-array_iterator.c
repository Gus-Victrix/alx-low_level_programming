#include "function_pointers.h"

/**
 * array_iterator - Gives all elements of array given to the function input.
 *
 * @array: Input array.
 * @size: Size of the array.
 * @action: Pointer to the function to be used.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
