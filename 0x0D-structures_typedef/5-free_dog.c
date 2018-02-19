#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free a dog
 * @d
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	dog_t *d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	init_dog(d, name, age, owner);
	return d;
}
