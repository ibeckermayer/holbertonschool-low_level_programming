#include "holberton.h"
#include <stdlib.h>

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
 * *str_concat - concatenates two strings
 * @s1: string1
 * @s2: string2
 *
 * returned pointer should point to a newly allocated space in memory
 * which contains the contents of s1, followed by the contents of s2,
 * and null terminated
 *
 * if NULL is passed, treat it as an empty string
 *
 * Return: pointer to concatenated string or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, offset;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	concat = malloc(len1 + len2 + 1);
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];
	offset = i;
	for (i = 0; i <= len2; i++)
		concat[i + offset] = s2[i];

	return (concat);
}
