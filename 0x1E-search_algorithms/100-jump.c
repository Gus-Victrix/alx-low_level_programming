#include "search_algos.h"

/**
 * linear_search_jump - search for a value in an array of integers via jump
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @val: value to search for
 * @mn: minimum index to start searching
 * @mx: maximum index to stop searching
 * Return: first index where value is located or -1 if value is not present
 */
int linear_search_jump(int *array, size_t size, int val, size_t mn, size_t mx)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = mn; i < size && i <= mx; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (val == array[i])
			return (i);
	}
	return (-1);
}

/**
 * jump_search - search for a value in an array of integers via jump
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located or -1 if value is not present
 */
int jump_search(int *array, size_t size, int value)
{
	size_t minim, middle;

	if (!array)
		return (-1);

	minim = 0;
	middle = sqrt(size);
	printf("Value checked array[%ld] = [%d]\n", minim, array[minim]);
	while (middle < size && array[middle] < value)
	{
		minim = middle;
		middle += sqrt(size);
		printf("Value checked array[%ld] = [%d]\n", minim, array[minim]);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", minim, middle);
	return (linear_search_jump(array, size, value, minim, middle));
}
