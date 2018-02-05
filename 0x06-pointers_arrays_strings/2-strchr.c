#include "holberton.h"
#define NULL ((void*)0)

/**
 * _strchr - finds the first occurrence of the character c in the string s,
 * or NULL if the character is not found.
 * @s: string to be checked
 * @c: character to be looked for
 *
 * Return: pointer to c or NULL if character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
		if (*s++ == c)
			return (--s);
	if (c == '\0')
		return (s);
	s = 0;
	return (s);
}
