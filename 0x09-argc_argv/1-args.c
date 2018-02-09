#include "holberton.h"
#include <stdio.h>

#define UNUSED(x) (void)(x)

/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	UNUSED(argv);
	printf("%d\n", argc - 1);
	return (0);
}
