#include "holberton.h"

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
 * print_rev - prints a string in reverse followed by \n
 * @s: string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = _strlen(s);

	while (len > 0)
		_putchar(*(s + len-- - 1));
	_putchar('\n');
}
