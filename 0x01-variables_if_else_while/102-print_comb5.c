#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits.
 * Return: 0
 */
int main(void)
{
	int n1, n2, n11, n12, n21, n22;

	n1 = 0;
	n2 = 1;
	while (n1 < 99)
	{
		n11 = n1 / 10;
		n12 = n1 % 10;
		n21 = n2 / 10;
		n22 = n2 % 10;

		if (n2 > n1)
		{
			putchar(n11 + '0');
			putchar(n12 + '0');
			putchar(' ');
			putchar(n21 + '0');
			putchar(n22 + '0');
			if (!(n1 == 98 && n2 == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
		n2++;
		if (n2 == 100)
		{
			n2 = 0;
			n1++;
		}

	}
	putchar('\n');
	return (0);
}
