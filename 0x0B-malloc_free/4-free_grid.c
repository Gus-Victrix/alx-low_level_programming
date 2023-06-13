#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2D array.
 *
 * @grid: Pointer array
 * @height: Heigth of array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
