#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Create a 2D array initialized to 0
 *
 * @width: Array width.
 * @height: Array height.
 *
 * Return: 0 if issues encountered, pointer array otherwise.
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (!(width > 0) || !(height > 0))
		return (0);

	array = (int **)malloc(height * sizeof(int *));

	if (!array)
		return (0);
	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(width * sizeof(int));

		if (!array[i])
		{
			for (j = 0; j < i; j++)
				free(array[j]);
			free(array);
			return (0);
		}
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);
}
