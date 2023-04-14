#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates array that contains all the values given from min to
 *					max.
 *
 * @min: The first number in the array.
 * @max: The last number in the array.
 *
 * Description: All integers in the range [min,max].
 *
 * Return: The address of the array of integers created.
 *			Null if min > max, or malloc fails.
 */

int *array_range(int min, int max)
{
	int *array = 0;
	int i;

	if (max < min)
		return (0);

	array = malloc(sizeof(int) * (max - min + 1));
	if (!array)
		return (0);

	for (i = 0; i + min <= max; i++)
		array[i] = i + min;

	return (array);
}
