#include "holberton.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to integer to be swapped
 * @b: pointer to integer to be swapped
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
