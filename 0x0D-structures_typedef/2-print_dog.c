#include "dog.h"
#include <stdlib.h>

/**
 * _puts - prints a string followed by a new line
 * @str: string
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}

/**
 * f_to_str - converts float to a string
 */
char *f_to_str(float f)
{

}

/**
 * print_dog - prints a dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	_puts(d->name);
	_putchar(d->age + '0')
	d->owner = owner;
}
