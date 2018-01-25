#include "holberton.h"

/**
 * _pow - takes a to the power of b
 * @a: operand
 * @b: operand
 *
 * Return: result
 */
int _pow(int a, int b)
{
	int result = a;

	while (--b > 0)
	{
		result *= a;
	}
	return (result);
}
/**
 * print_number - prints a number using only _putchar
 */
void print_number(int n)
{
	int places = 1;
	int divisor, dig, initial_divisor;

	if (n < 0)
		_putchar('-');

	while (n / _pow(10, places))
		places++;

	divisor = _pow(10, places);

	initial_divisor = divisor;
	while (divisor)
	{
		dig = (n / divisor) % 10;
		if (n < 0)
			dig *= -1;
		if (!(divisor == initial_divisor && dig == 0))
			_putchar(dig + '0');
		divisor /= 10;
	}
}
