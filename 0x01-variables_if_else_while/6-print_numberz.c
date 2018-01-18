#include <stdio.h>
/* more headers goes there */

/**
 * main - prints all single digit numbers of base 10 starting from 0, followed
 * by a new line.
 * Return: 0
 */
int main(void)
{
	int l;

	for (l = '0'; l <= '9'; l++)
		putchar(l);
	putchar('\n');

	return (0);
}
