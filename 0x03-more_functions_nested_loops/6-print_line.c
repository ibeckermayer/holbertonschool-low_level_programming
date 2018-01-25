#include "holberton.h"

/**
 * print_line - prints a line of n spaces, for n > 0
 * @n: number of spaces
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n-- > 0)
			_putchar('_');
	}
	_putchar('\n');
}
