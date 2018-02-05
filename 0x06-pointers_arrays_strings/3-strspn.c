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
 * _strspn - find number of bytes in the initial segment of s which consist
 * only of bytes from accept
 * @s: string to be checked
 * @accept: string to be matched to
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int ret = 0;

	while (*s)
		if (isin(*s++, accept))
			ret++;
		else
			return (ret);
	return (ret);
}
