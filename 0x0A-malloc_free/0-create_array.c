#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - initializes array of size size with character c
 * @size: size of the array
 * @c: character to be initialized with
 *
 * Return: NULL if size = 0 or it fails, otherwise
 * returns a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *ret;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ret = (char *) malloc(size);
	if (ret == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ret[i] = c;

	return (ret);
}
