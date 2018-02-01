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
 * is_sep - checks if character is separator
 * @c: character being checked
 *
 * Return: 0 for false, 1 for true
 */
int is_sep(char c)
{
	switch (c)
	{
	case ' ':
	case '\n':
	case '\t':
	case ',':
	case ';':
	case '.':
	case '!':
	case '?':
	case '"':
	case '(':
	case ')':
	case '{':
	case '}':
		return (1);
	default:
		return (0);
	}
}

/**
 * cap_string - capitalizes all the words of a string
 * @s: string
 *
 * Return: capitalized string.
 */
char *cap_string(char *s)
{
	int len = _strlen(s);
	int cap = 1;

	while (*s)
	{
		if (cap)
			if (*s >= 'a' && *s <= 'z')
				*s -= 'a' - 'A';

		if (is_sep(*s))
			cap = 1;
		else
			cap = 0;
		s++;
	}

	return (s - len);

}
