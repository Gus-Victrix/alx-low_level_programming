#include "search_algos.h"

/**
 * interpolation_search_rec - recursively searches for value via interpolation
 *
 * @array: pointer to integer array
 * @value: value to be searched
 * @start: left most limit to be searched
 * @end: right most limit to be searched
 *
 * Return: index of found value or -1 if not found.
 */
int interpolation_search_rec(int *array, int value, size_t start, size_t end)
{
	size_t middle;

	if (start > end)
		return (-1);

	middle = start + (((double)(end - start) / (array[end] - array[start]))
				* (value - array[start]));
	if (middle > end)
	{
		printf("Value checked array[%ld] is out of range\n", middle);
		return (-1);
	}
	printf("Value checked array[%ld] = [%d]\n", middle, array[middle]);
	if (array[middle] == value)
		return (middle);
	if (array[middle] < value)
		return (interpolation_search_rec(array, value, middle + 1, end));
	return (interpolation_search_rec(array, value, start, middle - 1));
}

/**
 * interpolation_search - search for value in array via interpolation method
 *
 * @array: pointer to integer array
 * @value: value to be searched
 * @size: size of the array
 *
 * Return: index of found value or -1 if not found.
 */
int interpolation_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (interpolation_search_rec(array, value, 0, size - 1));
}
