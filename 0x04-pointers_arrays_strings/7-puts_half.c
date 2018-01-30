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
 * puts_half - prints half of a string
 * @str: string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = _strlen(str);
	int i;

	for (i = len / 2; i < len; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
