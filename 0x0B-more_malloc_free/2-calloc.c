#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes each
 * @nmemb: number of members
 * @size: size of each member in bytes
 *
 * The memory is set to zero
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 *
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int total_bytes = nmemb * size;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(total_bytes);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < total_bytes; i++)
		p[i] = 0;

	return (p);
}
