#include "search_algos.h"
/**
 * +--------------------------------------------------------------------------+
 * |                        0x01E.C-SEARCH ALGORITHMS                         |
 * +--------------------------------------------------------------------------+
 * |   ALX Full Stack Software Engineering Program Project.                   |
 * +--------------------------------------------------------------------------+
 * |   Author: Francis Nderitu                                                |
 * |   Github: https://github.com/Gus-Victrix                                 |
 * |   LinkedIn: https://linkedin.com/in/francis-njoroge-nderitu              |
 * |   Date: 07th February, 2024                                              |
 * +--------------------------------------------------------------------------+
 * |   You may use this file for whatever purpose you wish.                   |
 * |   LICENCE MIT.                                                           |
 * +--------------------------------------------------------------------------+
 * |  The functions defined here are for use in the search algorithms project.|
 * +--------------------------------------------------------------------------+
 */

/**
 * +-----------------------------------+
 * |      Linear Search Algorithm.     |
 * +-----------------------------------+
 * |  Time Complexity: O(n)            |
 * |  Space Complexity: O(1)           |
 * +-----------------------------------+
 * |  Procedure:                       |
 * +-----------------------------------+
 * |  1. Take the value to be checked. |
 * |  2. Take array of values to be    |
 * |     searched.                     |
 * |  3. Loop: While index < length of |
 * |     the array                     |
 * |  4.    Compare value against      |
 * |        array member at current    |
 * |        index.                     |
 * |  5.    If they match: Return the  |
 * |        current index of the array |
 * |  6.    Else: Increase the array   |
 * |        index by one.              |
 * |  7. Return -1 if value is not     |
 * |     found in the array.           |
 * +-----------------------------------+
 */

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
