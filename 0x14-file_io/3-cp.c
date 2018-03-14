#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - copy a file
 * @ac: argcount
 * @av: args
 *
 * Return: 0 or error codes 97, 98, 99, or 100
 */
int main(int ac, char **av)
{
	int res, fd_from, fd_to;
	char *file_from = av[1];
	char *file_to = av[2];
	char buf[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(file_from, O_RDONLY);
	res = read(fd_from, buf, 1024);
	if (fd_from == -1 || res == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd_to = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	res = write(fd_to, buf, res);
	if (fd_to == -1 || res == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	res = close(fd_to);
	if (res == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	res = close(fd_from);
	if (res == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	return (0);
}
