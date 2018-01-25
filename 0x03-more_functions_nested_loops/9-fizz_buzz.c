#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, but with multiples of
 * 5 replaced by Buzz and multiples of 3 replaced by Fizz.
 * Multiples of both are replaced by FizzBuzz.
 *
 * Return: 0 always
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
		if (i % 3 == 0 && i % 5 == 0)
			printf("%s ", "FizzBuzz");
		else if (i % 3 == 0)
			printf("%s ", "Fizz");
		else if (i % 5 == 0)
			if (i < 100)
				printf("%s ", "Buzz");
			else
				printf("%s", "Buzz");
		else
			printf("%d ", i);

	putchar('\n');
	return (0);

}
