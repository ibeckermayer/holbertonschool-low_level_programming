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
 * _strncpy - copies n bytes of src to dest
 * @dest: string
 * @src: string
 * @n: number of bytes to copy from source
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int passed_null = 0;

	for (i = 0; i < n; i++)
	{
		if (!(*(src + i)))
			passed_null = 1;
		if (passed_null)
			*(dest + i) = '\0';
		else
			*(dest + i) = *(src + i);
	}
	return (dest);
}
