#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}

/**
 * _strcpy - copies the string from src to dest
 * @dest: array where copy is stored
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len = _strlen(src);

	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (dest - len);
}

/**
 * init_dog - initialize a dog structure
 * @d: dog pointer
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}

/**
 * new_dog - make and initialize a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 * Return: pointer to dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len_n = _strlen(name);
	int len_o = _strlen(owner);
	dog_t *d;
	char *namec;
	char *ownerc;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	namec = malloc(len_n + 1);
	if (namec == NULL)
		return (NULL);

	ownerc = malloc(len_o + 1);
	if (ownerc == NULL)
		return (NULL);

	namec = _strcpy(namec, name);
	ownerc = _strcpy(ownerc, owner);


	init_dog(d, namec, age, ownerc);
	return (d);
}
