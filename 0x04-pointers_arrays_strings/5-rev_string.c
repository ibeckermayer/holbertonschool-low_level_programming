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
 * rev_string - reverses a string
 * @s: string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len = _strlen(s);
	int i, temp;

	for (i = 0; i < len - 1 - i; i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + (len - 1 - i));
		*(s + (len - 1 - i)) = temp;
	}

	*(s + len) = '\0';
}
