#include "holberton.h"

/**
 * _isdigit - returns 1 if c is a digit, 0 otherwise
 * @c: character to be checked
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
