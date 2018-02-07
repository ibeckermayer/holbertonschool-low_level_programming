#include "holberton.h"

/**
 * find_sqrt - finds the natty square root of a number or returns -1 if it dne
 * @n: the number
 * @i: the number to start searching for the square root from
 *
 * Return: sqrt(n) or -1 if there is no natural sqrt
 */
int is_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (is_prime(n, --i));
}

/**
 * is_prime_number - checks if n is prime
 * @n: the number
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */
int is_prime_number(int n)
{
	if (n < 0 || n == 0 || n == 1)
		return (0);
	return (is_prime(n, n-1));
}
