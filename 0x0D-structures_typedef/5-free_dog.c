#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free a dog
 * @d: the dog
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (dog != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}
