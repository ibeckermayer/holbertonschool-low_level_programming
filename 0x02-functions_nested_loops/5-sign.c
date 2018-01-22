#include "holberton.h"

/**
 * print_sign - determines the sign of an integer
 * @n: character to be checked
 *
 * Return: 1 and prints + if positive, -1 and prints - if negative,
 * 0 and prints 0 otherwise.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
