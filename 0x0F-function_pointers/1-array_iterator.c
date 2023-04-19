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
	if (array && size && action)
		while (size)
			action(array[--size]);
}
