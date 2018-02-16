#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: starting integer
 * @max: ending integer
 *
 * array created should contain all the values from min (included)
 * to max (included), ordered from min to max.
 * If min > max, return NULL.
 * If malloc fails, return NULL.
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ints;
	unsigned int arr_size;
	int i;

	if (min > max)
		return (NULL);

	arr_size = max - min + 1;

	ints = malloc(sizeof(int) * arr_size);
	if (ints == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		ints[i - min] = i;

	return (ints);
}
