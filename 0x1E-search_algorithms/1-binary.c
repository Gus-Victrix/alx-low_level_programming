#include "search_algos.h"

/**
 * binary_search - searches for a value in sorted int array using binary search
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the index where value is located or -1 if not found.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left;  /* left bound */
	size_t right; /* right bound */
	size_t mid;  /* middle index */

	if (!array) /* Edge case: array is NULL */
		return (-1);
	if (size == 0) /* Edge case: size is 0 */
		return (-1);
	if (size == 1) /* Edge case: size is 1 */
	{
		if (array[0] == value)
			return (0);
		else
			return (-1);
	}
	if (size == 2) /* Edge case: size is 2 */
	{
		if (array[0] == value)
			return (0);
		if (array[1] == value)
			return (1);
		return (-1);
	}
	/* Initialize left and right bounds */
	left = 0, right = size - 1;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
