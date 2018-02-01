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
 * _strncat - concatenates two strings.
 * @dest: string
 * @src: string
 * @n: number of bytes to copy from source
 *
 * Description: appends the first n bytes of the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_dest = _strlen(dest);
	int len_src = n;
	int i;

	dest += len_dest;

	for (i = 0; i < n && *(src + i); i++)
		*dest++ = *(src + i);
	*(dest + 1) = '\0';
	dest -= len_dest + len_src;
	return (dest);
}
