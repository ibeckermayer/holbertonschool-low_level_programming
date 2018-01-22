#include "holberton.h"

/**
 * main - prints Holberton, followed by a new line.
 *
 * Return: returns 0 for completion.
 */
void print_alphabet(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
