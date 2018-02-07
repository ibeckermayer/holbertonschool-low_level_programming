#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 *
 * Return: void
 */
int _strlen_recursion(char *s)
{
	if (!(*s))
		return (0);
	else
		return (_strlen_recursion(++s) + 1);
}
