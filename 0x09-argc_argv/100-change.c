#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

#define UNUSED(x) (void)(x)

/**
 * main - prints the minimum number of coins to make change for an amount
 * of money.
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: 0 for success, 1 for failure
 */
int main(int argc, char *argv[])
{
	int cents, i;
	int change[] = {25, 10, 5, 2, 1};
	int len = 5;
	int coins = 0;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (0);
	}

	cents = atoi(argv[1]);

	if (cents <= 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 0; i < len; i++)
	{
		if (cents == 0)
			break;

		if (cents / change[i] > 0)
		{
			coins += cents / change[i];
			cents %= change[i];
		}
	}

	printf("%d\n", coins);
	return (0);
}
