#include "holberton.h"
#define NULL 0

/**
 * issub - checks if the first segment of s1 contains s2
 * @s1: string looked in, starting at byte 0
 * @s2: string looked for
 *
 * Return: 1 for true, 0 for false
 */
int issub(char *s1, char *s2)
{
	while (*s1 && *s2)
		if (*s1++ != *s2++)
			return (0);
	if (*s2 == '\0')
		return (1);
	return (0);
}

/**
 * _strstr - finds the first occurrence of the substring needle in the string
 *  haystack. The terminating null bytes (\0) are not compared
 * @haystack: string to be checked
 * @needle: substring to be matched to
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
		if (issub(haystack++, needle))
			return (--haystack);
	return (NULL);
}
