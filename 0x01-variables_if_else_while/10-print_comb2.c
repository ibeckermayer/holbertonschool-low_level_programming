#include <stdio.h>

/**
 * main - prints the numbers from 00 to 99.
 * Return: 0
 */
int main(void)
{
	int d1, d2;

	d1 = d2 = '0';

	while (d1 <= '9' && d2 <= '9')
	{
		putchar(d1);
		putchar(d2);

		if (!(d1 == '9' && d2 == '9'))
		{
			putchar(',');
			putchar(' ');
		}

		if (d2 == '9')
		{
			d2 = '0';
			d1++;
		}
		else
			d2++;
	}
	putchar('\n');

	return (0);
}
