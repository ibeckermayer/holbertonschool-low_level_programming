#include "holberton.h"

/**
 * rot13 - changes string to rot13 encoding
 * @s: string
 *
 * Return: rot13 encoding
 */
char *rot13(char *s)
{
	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char repl[] =    "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; s[i]; i++)
		for (j = 0; letters[j]; j++)
			if (s[i] == letters[j])
			{
				s[i] = repl[j];
				break;
			}
	return (s);
}
