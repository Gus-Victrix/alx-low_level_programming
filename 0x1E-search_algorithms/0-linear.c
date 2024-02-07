#include "search_algos.h"
/**
 * linear_search - Use linear search to find a value in an array.
 *
 * @array: Pointer to the first element of the array.
 * @size: The number of elements in the array.
 * @value: The value to search for in the array.
 *
 * Return: The first index where value is located or -1 if not found.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0; /* For array traversal. */

	/* Edge case: If array is NULL */
	if (!array)
		return (-1);
	/* Edge case: If size is 0 */
	if (!size)
		return (-1);

	/* Traversing the array */
	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		if (!(array[index] ^ value))  /* Checking for similarity */
		{
			printf("Found %d at index: %lu\n", value, index);
			return (index);
		}
	}

	return (-1);
}
