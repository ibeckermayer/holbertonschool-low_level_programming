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

/**
 * check_pal - checks if s is a palindrome, given it's length
 * @s: string
 * @len: length
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int check_pal(char *s, int len)
{
	if (len < 1)
		return (1);
	else if (s[0] == s[len])
		return (check_pal(++s, len - 2));
	else
		return (0);
}

/**
 * is_palindrome - checks if s is a palindrome
 * @s: string
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len == 0)
		return (1);
	if (len == 1)
		return (0);
	if (len == 2)
		return (s[0] == s[1] ? 1 : 0);
	return (check_pal(s, len - 1));
}
