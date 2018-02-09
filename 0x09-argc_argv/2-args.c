#include "holberton.h"
#include <stdio.h>

#define UNUSED(x) (void)(x)

/**
 * main - a program that prints all arguments it receives.
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
		printf("%s\n", argv[i++]);
	return (0);
}
