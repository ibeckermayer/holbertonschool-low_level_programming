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
 * puts2 - prints one char out of 2 of a string, followed by a new line.
 * @str: string
 *
 * Return: void
 */
void puts2(char *str)
{
	int len = _strlen(str);
	int i;

	for (i = 0; i < len; i += 2)
		_putchar(*(str + i));
	_putchar('\n');
}
