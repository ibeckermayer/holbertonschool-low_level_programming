#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of ints
 * @n: the number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temp = 0;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
