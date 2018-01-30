#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints first n elements of array
 * @a: array to be printed
 * @n: number of elements to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n - 1; i++)
		printf("%d, ", *(a + i));
	printf("%d\n", *(a + (n - 1)));
}
