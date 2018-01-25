#include "holberton.h"

/**
 * put_hashtag - puts n hashtags
 * @n: number of hashtags
 */
void put_hashtag(int n)
{
	while (n-- > 0)
		_putchar('#');
}

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
 * print_triangle - prints a triangle of base n, for n > 0
 * @n: size of base
 */
void print_triangle(int n)
{
	if (n > 0)
	{
		int spaces = n - 1;
		int iter = n;

		while (iter > 0)
		{
			put_spaces(spaces);
			put_hashtag(n - spaces);
			_putchar('\n');
			iter--;
			spaces--;
		}
	}
	else
		_putchar('\n');
}
