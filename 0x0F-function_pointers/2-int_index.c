#include "function_pointers.h"

/**
 * int_index - Finds the first occurence of a particular element in an array.
 *
 * @array: Array to be checked for the given value.
 * @size: Number of elements in the array.
 * @cmp: Function used to compare values.
 *
 * Return: Index of the first occurence element. -1 if not found or errors.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size > 0 && cmp)
	{
		while (i < size && !cmp(array[i]))
			i++;
		if (!(size == i))
			return (i);
	}
	return (-1);
}
