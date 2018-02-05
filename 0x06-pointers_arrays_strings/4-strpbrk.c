#include "holberton.h"
#define NULL 0

/**
 * isin - checks if character c is in string s
 * @c: character
 * @s: string
 *
 * Return: 1 for true, 0 for false
 */
int isin(char c, char *s)
{
	while (*s)
		if (c == *s++)
			return (1);
	return (0);
}

/**
 * _strpbrk - locates the first occurrence in the string s of any of the
 * bytes in the string accept
 * @s: string to be checked
 * @accept: string to be matched to
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
		if (isin(*s++, accept))
			return (--s);
	return (NULL);
}
