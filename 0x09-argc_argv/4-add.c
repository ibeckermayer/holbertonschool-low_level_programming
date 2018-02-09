#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

#define UNUSED(x) (void)(x)

/**
 *only_numbers - checks if a string contains only numbers
 * @s: the string
 *
 * Return: 1 if true, 0 if false
 */
int only_numbers(char *s)
{
	while (*s)
	{
		if (!(*s >= '0' && *s <= '9'))
			return (0);
		s++;
	}
	return (1);
}

/**
 * main - adds all command line arguments together
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Description: Print the result, followed by a new line
 * If no number is passed to the program, print 0, followed by a new line.
 * in an integer.
 * If one of the number contains symbols that are not digits, print Error,
 * followed by a new line, and return 1.
 * Return: 0 for success, 1 for failure
 */
int main(int argc, char *argv[])
{
	int result = 0;
	int i = 1;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	while (i < argc)
	{
		if (only_numbers(argv[i]))
			result += atoi(argv[i]);
		else
		{
			printf("%s\n", "Error");
			return (1);
		}
		i++;
	}

	printf("%d\n", result);
	return (0);
}
