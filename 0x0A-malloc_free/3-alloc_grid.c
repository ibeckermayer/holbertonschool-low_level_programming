#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of grid
 * @height: height of grid
 *
 * Each element of the grid should be initialized to 0
 *
 * Return: pointer to grid, or NULL on failure.
 * width, height <= 0, return NULL.
 */
int **alloc_grid(int width, int height)
{
	int **rows;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);

	rows = malloc(sizeof(int *) * height);
	if (rows == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		rows[i] = malloc(sizeof(int) * width);
		if (rows[i] == NULL)
			return (NULL);
	}

	return (rows);
}
