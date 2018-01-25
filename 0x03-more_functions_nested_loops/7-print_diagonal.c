#include "holberton.h"

/**
 * put_spaces - puts n spaces
 * @n: number of spaces
 */
void put_spaces(int n)
{
	while (n-- > 0)
		_putchar(' ');
}

/**
 * print_diagonal - prints a diagonal of n spaces, for n > 0
 * @n: number of diagonals
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int spaces = 0;

		while (n-- > 0)
		{
			put_spaces(spaces++);
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
