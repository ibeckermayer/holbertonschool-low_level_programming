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
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string
 *
 * Return: Returns NULL if str = NULL, or failure
 * else returns a pointer to the copied string
 */
char *_strdup(char *str)
{
	int len, i;
	char *copy;

	if (str == NULL)
		return (NULL);

	len = _strlen(str);
	if ((copy = malloc(len + 1)) == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		copy[i] = str[i];
	return (copy);

}
