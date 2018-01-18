#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase, followed by a \n
 * Return: 0
 */
int main(void)
{
	char n = '0';

	while (n <= '9')
		putchar(n++);
	n = 'a';
	while (n <= 'f')
		putchar(n++);
	putchar('\n');

	return (0);
}
