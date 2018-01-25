#include "holberton.h"

/**
 * print_14 - prints the numbers 0-14 and \n
 */
void print_14(void)
{
	int i;

	for (i = 0; i <= 14; i++)
	{
		if (i < 10)
			_putchar(i + '0');
		else
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
	}
	_putchar('\n');
}

/**
 * more_numbers - prints the numbers 0-14 ten times
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		print_14();
}
