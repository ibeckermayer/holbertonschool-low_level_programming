#include "holberton.h"

/**
 * leet - capitalizes all the words of a string
 * @s: string
 *
 * Return: capitalized string.
 */
char *leet(char *s)
{
	char letters[] = "aAeEoOtTlL";
	char replacements[] = "4433007711";
	int i, j;

	for (i = 0; s[i]; i++)
		for (j = 0; letters[j]; j++)
			if (s[i] == letters[j])
				s[i] = replacements[j];
	return (s);
}
