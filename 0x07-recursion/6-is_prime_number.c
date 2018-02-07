#include "holberton.h"

/**
 * is_prime - checks if n is prime
 * @n: the number
 * @i: the number to start checking from
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
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
	return (is_prime(n, n - 1));
}
