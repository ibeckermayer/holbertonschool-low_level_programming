#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0, followed by a new line
 * Return: 0
 */
int main(void)
{
	int n = 0;

	while (n < 10)
		printf("%d", n++);
	putchar('\n');

	return (0);
}
