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
 * string_toupper - converts a string to uppercase
 * @s: string
 *
 * Return: void
 */
char *string_toupper(char *s)
{
	int len = _strlen(s);

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 'a' - 'A';
		s++;
	}

	return (s - len);

}
