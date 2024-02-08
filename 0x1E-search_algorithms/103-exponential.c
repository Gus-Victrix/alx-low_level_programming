#include "search_algos.h"

/**
 * print_array - print array elements between start and end
 *
 * @array: pointer to the first element of the array
 * @start: index to start printing
 * @end: index to end printing
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	if (!array)
		return;
	printf("Searching in array:");
	for (i = start; i < end; i++)
		printf(" %d,", array[i]);
	printf(" %d\n", array[i]);
}

/**
 * binary_search_rec - search for value in array using binary search
 *
 * @array: pointer to the first element of the array
 * @start: index to start search
 * @end: index to end search
 * @value: value to search for
 *
 * Return: index of value in array or -1 if not found
 */
int binary_search_rec(int *array, size_t start, size_t end, int value)
{
	int middle;

	if (start > end)
		return (-1);
	print_array(array, start, end);
	middle = (start + end) / 2;
	if (value == array[middle])
		return (middle);
	if (value < array[middle])
		return (binary_search_rec(array, start, middle - 1, value));
	return (binary_search_rec(array, middle + 1, end, value));
}

/**
 * exponential_search - search for value in array using exponential search
 *
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index of value in array or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	size_t end;

	if (!array)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	bound /= 2;
	end = bound * 2 < size - 1 ? bound * 2 : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", bound, end);

	return (binary_search_rec(array, bound, end, value));
}
