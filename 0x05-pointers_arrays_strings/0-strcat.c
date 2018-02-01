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
 * _strcat - concatenates two strings.
 * @dest: string
 * @src: string
 *
 * Description: appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int len_dest = _strlen(dest);
	int len_src = _strlen(src);

	dest += len_dest;
	while (*src)
		*dest++ = *src++;
	*(dest + 1) = '\0';
	dest -= len_dest + len_src;
	return (dest);
}
