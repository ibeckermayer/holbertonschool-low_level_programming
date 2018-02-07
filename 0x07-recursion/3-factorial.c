#include "holberton.h"

/**
 * factorial - finds factorial of a given number
 * @n: number
 *
 * Return: the answer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
