#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

#define UNUSED(x) (void)(x)

/**
 * main - multiplies two numbers
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Description: print the result of the multiplication, followed by a new line
 * assume that the two numbers and result of the multiplication can be stored
 * in an integer.
 * If the program does not receive two arguments, your program should print
 * Error, followed by a new line, and return 1.
 * Return: 0 for success, 1 for failure
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}

	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}
