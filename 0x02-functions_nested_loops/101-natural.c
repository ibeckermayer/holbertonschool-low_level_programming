#include <stdio.h>

/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: 0 for completion
 */
int main(void)
{
	int sum, i;

	sum = i = 0;

	while (i * 5 < 1024)
		sum += i++ * 5;

	i = 0;

	while (i * 3 < 1024)
		sum += i++ * 3;

	printf("%d\n", sum);
	return (0);

}
