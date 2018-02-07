#include "holberton.h"

/**
 * find_sqrt - finds the natty square root of a number or returns -1 if it dne
 * @n: the number
 * @i: the number to start searching for the square root from
 *
 * Return: sqrt(n) or -1 if there is no natural sqrt
 */
int find_sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (find_sqrt(n, ++i));
}

/**
 * _sqrt_recursion - takes the natural sqrt of a number
 * @n: the number
 *
 * Return: sqrt(n) or -1 if there is no natural sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (find_sqrt(n, 1));
}
