#include "search_algos.h"

/**
 * print_array - print array
 *
 * @array: pointer to first element of array
 * @start: index to start print
 * @end: index to end print
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
 * binary_search_rec - search for first occurrence of value in array
 *
 * @array: pointer to first element of array
 * @start: index to start search
 * @end: index to end search
 * @value: value to search for
 * Return: index of value in array or -1 if not found
 */
int binary_search_rec(int *array, size_t start, size_t end, int value)
{
	int middle;

	if (start > end)
		return (-1);
	print_array(array, start, end);
	middle = (start + end) / 2;
	if (value == array[middle] && middle - 1 >= 0
					&& array[middle - 1] == array[middle])
		return (binary_search_rec(array, start, middle, value));
	if (value == array[middle])
		return (middle);
	if (value < array[middle])
		return (binary_search_rec(array, start, middle, value));
	return (binary_search_rec(array, middle + 1, end, value));
}

/**
 * advanced_binary - search for first occurrence of value in array
 *
 * @array: pointer to first element of array
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of value in array or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (binary_search_rec(array, 0, size - 1, value));
}
