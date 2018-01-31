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
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
