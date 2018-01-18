#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and uppercase a-z except and then
 * newline except for q and e
 * Return: 0
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (!(l == 'q' || l == 'e'))
			putchar(l);
	}
	putchar('\n');

	return (0);
}
