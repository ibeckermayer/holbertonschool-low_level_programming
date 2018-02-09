#include "holberton.h"
#include <stdio.h>

#define UNUSED(x) (void)(x)

/**
 * main - a program that prints its name, followed by a new line
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	UNUSED(argc);
	printf("%s\n", argv[0]);
	return (0);
}
