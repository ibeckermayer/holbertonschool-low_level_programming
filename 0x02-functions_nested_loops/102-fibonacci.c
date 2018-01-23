#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0 for completion
 */
int main(void)
{
	long cur, prev, holder;
	int iter;

	cur = iter = 2;
	prev = 1;
	printf("%ld, ", prev);
	while (iter < 50)
	{
		printf("%ld, ", cur);
		holder = cur;
		cur = cur + prev;
		prev = holder;
		iter++;
	}
	printf("%ld\n", cur);
	return (0);

}
