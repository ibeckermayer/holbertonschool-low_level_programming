#include <unistd.h>
#include <stdio.h>
/**
 * main - main function
 * Return: exit code
 */
int main(void)
{
	char b[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, b, (unsigned long)sizeof(b) - 1);
	return (1);
}
