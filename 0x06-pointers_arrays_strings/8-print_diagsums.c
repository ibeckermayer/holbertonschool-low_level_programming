#include "holberton.h"
#include <stdio.h>
#define INT_SIZE 4

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: the matrix
 * @size: the size of the matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum0, sum1;

	sum0 = 0;
	sum1 = 0;

	for (i = 0; i < size * size; i += (size + 1))
		sum0 += *(a + i);

	for (j = size - 1; j < i - (size + 1); j += (size - 1))
		sum1 += *(a + j);

	printf("%d, %d\n", sum0, sum1);
}
