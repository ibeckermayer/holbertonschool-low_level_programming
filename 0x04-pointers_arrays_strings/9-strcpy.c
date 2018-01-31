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
