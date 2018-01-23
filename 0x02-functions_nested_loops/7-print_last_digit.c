#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: character to be abs'd
 *
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	while (n >= 100)
		n /= 10;

	n %= 10;

	if (n < 0)
		n *= -1;
	_putchar(n + '0');
	return (n);
}
