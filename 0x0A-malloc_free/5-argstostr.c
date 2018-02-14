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

	concat = malloc(len1 + len2 + 2);
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];
	offset = i;
	for (i = 0; i < len2; i++)
		concat[i + offset] = s2[i];
	concat[i++ + offset] = '\n';
	concat[i + offset] = '\0';

	return (concat);
}

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: argument count
 * @av: arguments
 * Each argument should be followed by a \n in the new string
 *
 * Return: NULL if ac == 0 or av == NULL or failure
 * else, a pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	char *ret_string = NULL;
	int i;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		ret_string = str_concat(ret_string, av[i]);
		if (ret_string == NULL)
			return (NULL);
	}

	return (ret_string);
}
