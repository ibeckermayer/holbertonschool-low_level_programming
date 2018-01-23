#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98, followed by a \n
 * @n: number from which to print to 98 until
 */
void print_to_98(int n)
{
	if (n > 98)
		for (; n > 98; n--)
			printf("%d, ", n);

	if (n < 98)
		for (; n < 98; n++)
			printf("%d, ", n);

	printf("%d\n", 98);
}
