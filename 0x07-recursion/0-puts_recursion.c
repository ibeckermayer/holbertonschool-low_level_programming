#include "holberton.h"

/**
 * _puts_recursion - puts a string followed by a newline
 * @s: string
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s++);
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
