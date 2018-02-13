#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - initializes array of size size with character c
 * @size: size of the array
 * @c: character to be initialized with
 *
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *ret = (char *) malloc(size);
	unsigned int i;

	if (ret == NULL)
		return (0);

	for (i = 0; i < size; i++)
		ret[i] = c;

	return ret;
}
