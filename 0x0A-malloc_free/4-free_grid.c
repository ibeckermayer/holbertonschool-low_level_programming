#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by alloc_grid.
 * @grid: the grid to be freed
 * @height: height of grid
 *
 * program should not crash if the grid is invalid (NULL or size = 0)
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
